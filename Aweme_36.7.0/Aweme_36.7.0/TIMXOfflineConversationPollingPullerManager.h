@class TIMXSDKInstance, NSHashTable, TIMXGCDTimer, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXOfflineConversationPollingPullerManager : NSObject {
    TIMXSDKInstance *_r;
}

@property (retain) TIMXGCDTimer *offlineConversationPollingPullTimer;
@property BOOL isForeground;
@property unsigned long long currentWSState;
@property long long currentNetworkStatus;
@property (nonatomic) double pollingInterval;
@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedOperationQueue;

- (void)__addObserver;
- (void)handleReachabilityChangedNotification:(id)a0;
- (id)initWithRootObject:(id)a0 pollingInterval:(double)a1;
- (void)wsStateChanged:(id)a0;
- (void)enterConversation:(id)a0;
- (void)__tryChangePollingTimer;
- (BOOL)__shouldPull;
- (id)__getTracingParams;
- (void)__offlineConversationPollingPullFired:(id)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)appDidBecomeActive;
- (void)appWillResignActive;

@end
