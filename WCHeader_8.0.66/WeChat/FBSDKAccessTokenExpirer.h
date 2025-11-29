@class NSTimer;

@interface FBSDKAccessTokenExpirer : NSObject {
    NSTimer *_timer;
}

- (id)init;
- (void)dealloc;
- (void)_checkAccessTokenExpirationDate;
- (void)_timerDidFire;
- (void).cxx_destruct;

@end
