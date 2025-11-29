@interface WeChat.ReusablePageManager : NSObject <IMMFontMgrExt> {
    void /* unknown type, empty encoding */ pages;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ isRemovingPage;
}

- (void)onFontSizeChange;
- (id)init;
- (void)onMemoryWarning;
- (void)validCheck;
- (void).cxx_destruct;

@end
