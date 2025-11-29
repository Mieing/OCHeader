@interface _TtCC6WeChat17KaraFeatureCenter6Device : _TtCC6WeChat17KaraFeatureCenter9Component <IDiskUsageMgr> {
    void /* unknown type, empty encoding */ _sizeOfWeChatDataInMB;
    void /* unknown type, empty encoding */ _sizeOfChatHistoriesInMB;
    void /* unknown type, empty encoding */ _model;
    void /* unknown type, empty encoding */ _screenSize;
    void /* unknown type, empty encoding */ _iOS;
    void /* unknown type, empty encoding */ _battery;
    void /* unknown type, empty encoding */ _applicationState;
}

- (void)onDiskUsageMgrFinishOneScan:(id)a0;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;

@end
