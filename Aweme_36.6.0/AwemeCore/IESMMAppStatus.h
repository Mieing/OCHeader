@class NSPointerArray;

@interface IESMMAppStatus : IESMMObject

@property (nonatomic) long long appStatus;
@property (retain, nonatomic) NSPointerArray *delegateArray;
@property (nonatomic) BOOL audioSessionPortChange;
@property long long contextRefCount;

+ (void)initialize;
+ (id)sharedInstance;

- (void)addContextCacheRef;
- (void)appAudioRouteStatusChangeListenerCallback:(id)a0;
- (id)blueToothName;
- (BOOL)currentPortIsBluetooth;
- (BOOL)currentPortIsHeadphonesOrBluetooth;
- (void)decreaseContextCacheRef;
- (void)decreaseContextCacheRef:(BOOL)a0;
- (void)flushContextCache;
- (BOOL)isReallyInBackground;
- (void)playerItemFailedToPlayToEndTimeListener:(id)a0;
- (void)playerItemPlaybackStalledNotificationdListener:(id)a0;
- (void)registerAppStatusDelegate:(id)a0;
- (void)registerAudioNotify;
- (void)registerBecomeActiveNotify;
- (void)registerEnterBackgroundNotify;
- (void)registerEnterForegroundNotify;
- (void)registerMemoryWarningNotify;
- (void)registerResignActiveNotify;
- (void)startAudioPortListen;
- (BOOL)stopAudioPortListen;
- (void)unregisterAppStatusDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isInBackground;
- (void)resetContext;

@end
