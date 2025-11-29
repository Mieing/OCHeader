@class IESLivePopRoomToShowPipGuideView;

@interface IESLivePopRoomToShowPipGuideManager : NSObject

@property (retain, nonatomic) IESLivePopRoomToShowPipGuideView *showPipGuideView;

+ (id)sharedManager;

- (void)addGuideView;
- (BOOL)p_isTouchInGuideView:(struct CGPoint { double x0; double x1; })a0;
- (void)animationGuideViewWithProgress:(double)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)endAnimationWithProgress:(double)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
