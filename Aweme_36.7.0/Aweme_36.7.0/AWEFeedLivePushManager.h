@class NSTimer;

@interface AWEFeedLivePushManager : NSObject

@property (retain, nonatomic) NSTimer *timer;

+ (id)sharedInstance;

- (void)showPush:(id)a0;
- (void)handleNewBroadcastNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
