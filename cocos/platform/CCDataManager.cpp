/****************************************************************************
Copyright (c) 2010-2012 cocos2d-x.org
Copyright (c) 2013-2016 Chukong Technologies Inc.
Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
Copyright (c) 2019 Xiamen Yaji Software Co., Ltd.

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#include "platform/CCDataManager.h"

#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
#   include "platform/android/jni/JniHelper.h"
#   define DataManagerClassName "org/cocos2dx/lib/Cocos2dxDataManager"
#endif

NS_CC_BEGIN

void DataManager::setProcessID(int pid){
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    JniHelper::callStaticVoidMethod(DataManagerClassName, "setProcessID", pid);
#endif
}
void DataManager::setFrameSize(int width, int height){
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    JniHelper::callStaticVoidMethod(DataManagerClassName, "setFrameSize", width, height);
#endif
}
void DataManager::onSceneLoaderBegin(){
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    JniHelper::callStaticVoidMethod(DataManagerClassName, "onSceneLoaderBegin");
#endif
}
void DataManager::onSceneLoaderEnd(){
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    JniHelper::callStaticVoidMethod(DataManagerClassName, "onSceneLoaderEnd");
#endif
}
void DataManager::onShaderLoaderBegin(){
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    JniHelper::callStaticVoidMethod(DataManagerClassName, "onShaderLoaderBegin");
#endif
}
void DataManager::onShaderLoaderEnd(){
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    JniHelper::callStaticVoidMethod(DataManagerClassName, "onShaderLoaderEnd");
#endif
}
void DataManager::setOptimise(const std::string& thing, const std::string& value){
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    JniHelper::callStaticVoidMethod(DataManagerClassName, "setOptimise", thing.c_str(), value.c_str());
#endif  
}

NS_CC_END
