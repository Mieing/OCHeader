@class NSString, MMLiveTaskId, NSMutableDictionary;
@protocol MMFinderLiveGestureAnimationContainerViewDelegate;

@interface MMFinderLiveGestureAnimationContainerView : UIView <MMFinderLiveGestureAnimationViewDelegate>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) unsigned int audioId;
@property (retain, nonatomic) NSMutableDictionary *playingInstances;
@property (weak, nonatomic) id<MMFinderLiveGestureAnimationContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 audioId:(unsigned int)a1;
- (BOOL)addGestureAnimationPagForGestureId:(id)a0 instanceId:(id)a1 referenceAspectRatio:(double)a2 translationX:(double)a3 translationY:(double)a4 rotation:(double)a5 scale:(double)a6 giftSenderNickname:(id)a7;
- (void)onGestureAnimationViewWillBeginPlaying:(id)a0;
- (void)onGestureAnimationViewDidEndPlaying:(id)a0;
- (void).cxx_destruct;

@end
