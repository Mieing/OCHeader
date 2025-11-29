@class IESLiveInnerFeedContext, NSString;

@interface IESLiveInnerFeedLandscapeScrollController : NSObject <IESLiveInnerFeedDataControlAction, IESLiveInnerFeedLandscapeScrollService>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (nonatomic) unsigned long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (void)innerFeedDidDeleteItems:(id)a0;
- (void)transitionAnimateCompletion;
- (BOOL)shouldProhibitLandscapeSlideDownWith:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isHorizontalJumpEnableWith:(BOOL)a0;
- (void)p_handleOrientationChanged:(long long)a0;
- (void)p_handlePanGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
