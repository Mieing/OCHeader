@interface AWEPaySwiftImpl.SecurityLockDisplayManager : NSObject <AWEUserMessage> {
    void /* unknown type, empty encoding */ shouldShow;
    void /* unknown type, empty encoding */ applicationIsInBackground;
    void /* unknown type, empty encoding */ curLockVC;
    void /* unknown type, empty encoding */ currDisplayContext;
    void /* unknown type, empty encoding */ lockStartTime;
}

- (void)userChangedFrom:(id)a0 to:(id)a1;
- (void)handleForegroundNotification;
- (void)handleBackgroundNotification;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
