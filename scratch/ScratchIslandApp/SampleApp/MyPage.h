// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "MyPage.g.h"
#include "../../../src/cascadia/inc/cppwinrt_utils.h"

namespace winrt::SampleApp::implementation
{
    struct MyPage : MyPageT<MyPage>
    {
    public:
        MyPage();

        void Create();

        hstring Title();

    private:
        friend struct MyPageT<MyPage>; // for Xaml to bind events

        winrt::fire_and_forget _newBlockHandler(Windows::Foundation::IInspectable sender, Microsoft::Terminal::Control::BlockContent content);
    };
}

namespace winrt::SampleApp::factory_implementation
{
    BASIC_FACTORY(MyPage);
}
