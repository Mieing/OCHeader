@class NSObject;
@protocol OS_dispatch_queue, WXVoIPAudioHardwareSystemNotificationsLifelongObserverDelegate;

@interface WXVoIPAudioHardwareSystemNotificationsLifelongObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id<WXVoIPAudioHardwareSystemNotificationsLifelongObserverDelegate> delegate;
@property BOOL isInterrupted;
@property BOOL isAPPActive;

- (id)init:(id)a0;
- (void)asyncRun:(id /* block */)a0;
- (void)syncRun:(id /* block */)a0;
- (void)runAfter:(int)a0 block:(id /* block */)a1;
- (void)initAPPActiveState;
- (void)observeSystemNotifications;
- (void)dealloc;
- (void)handleInterruption:(id)a0;
- (void)handleApplicationDidEnterBackground:(id)a0;
- (void)handleApplicationWillResignActive:(id)a0;
- (void)handleApplicationDidBecomeActive:(id)a0;
- (void)handleMediaServicesWereLost:(id)a0;
- (void)handleMediaServicesWereReset:(id)a0;
- (void)updateApplicationActiveState;
- (void).cxx_destruct;

@end
