@class NSString;
@protocol ALMOwnPlayerDelegateWrapperDelegate;

@interface ALMOwnPlayerDelegateWrapperNew : NSObject <TTVideoEngineDelegate>

@property (weak, nonatomic) id<ALMOwnPlayerDelegateWrapperDelegate> delegate;
@property (nonatomic) BOOL playWithURLs;
@property (nonatomic) long long currTryIndex;
@property (nonatomic) long long enableForwarding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signatureForSelector:(SEL)a0 inProtocol:(id)a1;
+ (struct objc_method_description { SEL x0; char *x1; })descriptionForSelecctor:(SEL)a0 inProtocol:(id)a1;
+ (id)wrapperWithDelegate:(id)a0 playWithURLs:(BOOL)a1;

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1 extra:(id)a2;
- (void)videoEngineReadyToPlay:(id)a0;
- (void)videoEngine:(id)a0 mdlKey:(id)a1 hitCacheSze:(long long)a2;
- (void)videoEngineDeviceOpened:(id)a0 streamType:(long long)a1;
- (void)videoEngine:(id)a0 avOutsyncStateDidChanged:(unsigned long long)a1 extraInfo:(id)a2;
- (void)videoEngine:(id)a0 switchMediaInfoCompleted:(long long)a1;
- (void)videoEngine:(id)a0 didFinishedWithEvent:(id)a1;
- (void)videoEngine:(id)a0 onSubtitleInfoCallBack:(id)a1 pts:(unsigned long long)a2;
- (void)videoEngine:(id)a0 onSubtitleInfoCallBack:(id)a1;
- (void)videoEngine:(id)a0 onSubtitleInfoRequested:(id)a1 error:(id)a2;
- (void)videoEngine:(id)a0 onSubSwitchCompleted:(BOOL)a1 currentSubtitleId:(long long)a2;
- (void)videoEngine:(id)a0 onSubLoadFinished:(BOOL)a1 info:(id)a2;
- (void)setPlayerDelegateForwardingOptimized:(long long)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
