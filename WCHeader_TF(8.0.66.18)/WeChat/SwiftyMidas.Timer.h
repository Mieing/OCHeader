@interface SwiftyMidas.Timer : NSObject {
    void /* unknown type, empty encoding */ timeout;
    void /* unknown type, empty encoding */ shouldHandleResignActive;
    void /* unknown type, empty encoding */ repeats;
    void /* unknown type, empty encoding */ timeoutAction;
    void /* unknown type, empty encoding */ resignActiveAction;
    void /* unknown type, empty encoding */ stopAction;
    void /* unknown type, empty encoding */ isTimeoutActionFired;
    void /* unknown type, empty encoding */ isAppActive;
}

- (void)appWillResignActive;
- (void)appDidBecomeActive;
- (void)fireTimeoutAction;
- (void)fireStopAction;
- (void)fireResignActiveAction;
- (id)init;
- (void).cxx_destruct;

@end
