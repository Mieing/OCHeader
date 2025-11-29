@class NSMutableDictionary, NSString, MMFinderLiveTaskId, MMFinderLiveGestureAnimationWeVisionRenderer, NSMutableArray, MMFinderLiveGestureGiftSenderCacheItem;

@interface MMFinderLiveGestureLogic : NSObject <MMFinderLiveGestureCacheExt, MMLiveTaskMgrExt, MMFinderLiveGestureAnimationExternalRenderingDelegate, MMFinderLiveGestureAnimationContainerViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSMutableDictionary *luaObjectIdToGestureIdMap;
@property (retain, nonatomic) NSMutableDictionary *gestureIdToLuaObjectIdMap;
@property (retain, nonatomic) NSMutableArray *registrationTasks;
@property (nonatomic) BOOL masterSwitchEnabled;
@property (nonatomic) BOOL enabled;
@property (nonatomic) double temporarilyEnabledUntil;
@property (nonatomic) BOOL currentAnchorAnimationPlaying;
@property (retain, nonatomic) NSMutableDictionary *stableReferenceLuaMessageItems;
@property (nonatomic) double anchorAspectRatio;
@property (retain, nonatomic) MMFinderLiveGestureGiftSenderCacheItem *lastIncomingGiftSender;
@property (retain, nonatomic) NSMutableDictionary *recentIncomingGiftSenders;
@property (retain, nonatomic) MMFinderLiveGestureAnimationWeVisionRenderer *weVisionLuaRenderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)defaultGestureEnablementForLiveTag:(id)a0;
+ (BOOL)isNewGestureLuaMessageModel:(id)a0 stableRelativeWith:(id)a1;

- (id)initWithTaskId:(id)a0 enabled:(BOOL)a1;
- (void)updateBackendMasterSwitchEnablement;
- (void)setEnabled:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)temporarilyEnableForTime:(double)a0;
- (void)invalidateTemporaryEnablement;
- (void)processLuaScriptJsonMessage:(id)a0 fromSourceId:(int)a1;
- (void)processReceivedGestureSeiMessageFragment:(id)a0;
- (void)processGestureEligibleGiftingMessage:(id)a0;
- (void)onCachedGestureWillUpdate:(id)a0;
- (void)onCachedGestureDidUpdate:(id)a0 result:(unsigned long long)a1;
- (void)onCachedGestureWillDelete:(id)a0;
- (void)onGestureAnimationViewDidEndPlaying:(id)a0;
- (void)onLiveTask:(id)a0 trtcLocalVideoSizeChanged:(struct CGSize { double x0; double x1; })a1;
- (void)onExternallyRenderedGestureAnimationInvokedForGestureId:(id)a0;
- (id)liveTask;
- (BOOL)finalEnabled;
- (void)updateLuaScriptRegistrationBasedOnEnablement;
- (void)enqueueRegistrationTaskWithType:(unsigned long long)a0 gestureIdsSource:(id /* block */)a1;
- (void)dequeueRegistrationTask;
- (void)registerLuaScriptForGestureWithId:(id)a0 completionBlock:(id /* block */)a1;
- (void)unregisterLuaScriptForGestureWithId:(id)a0 completionBlock:(id /* block */)a1;
- (void)startGestureAnimationWithLuaJsonMessageItem:(id)a0;
- (void)startGestureAnimationWithSeiModel:(id)a0 itemModel:(id)a1;
- (void)sendGestureSeiWithModel:(id)a0;
- (void)updateAnchorAspectRatioWithLocalVideoSize:(struct CGSize { double x0; double x1; })a0;
- (id)animationPlayer;
- (void)playSoundEffectForGestureWithId:(id)a0;
- (void).cxx_destruct;

@end
