@class NSMutableDictionary, NSString, NSMutableSet, MMFinderLiveTaskId;
@protocol MMFinderLiveGestureAnimationExternalRenderingDelegate;

@interface MMFinderLiveGestureAnimationWeVisionRenderer : NSObject <MMFinderLiveGestureAnimationExternalRendering>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSMutableDictionary *renderScriptIdToRenderTaskMap;
@property (retain, nonatomic) NSMutableDictionary *animationResourceIdToRenderTaskMap;
@property (retain, nonatomic) NSMutableSet *gestureDeduplicateSet;
@property (weak, nonatomic) id<MMFinderLiveGestureAnimationExternalRenderingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)addGestureAnimationForCurrentUserWithGestureId:(id)a0 instanceId:(id)a1 translationX:(double)a2 translationY:(double)a3 rotation:(double)a4 scale:(double)a5;
- (void)processLuaScriptJsonMessage:(id)a0 fromSourceId:(int)a1;
- (id)liveTask;
- (void)startRenderingOfTask:(id)a0;
- (void)completeRenderingOfAnimationWithResourceId:(long long)a0 instanceId:(int)a1;
- (void)playSoundEffectForGestureWithId:(id)a0;
- (void)reportAnimationPlayingWithRenderTask:(id)a0;
- (void).cxx_destruct;

@end
