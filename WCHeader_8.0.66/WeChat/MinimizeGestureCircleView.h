@class UIImageView, UILabel, UIView, MinimizeGesBlurCircleView;

@interface MinimizeGestureCircleView : UIView

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL forVoiceMsg;
@property (retain, nonatomic) UILabel *minimizeLabel;
@property (retain, nonatomic) UIImageView *minimizeIconView;
@property (retain, nonatomic) UIView *currentMaskView;
@property (retain, nonatomic) MinimizeGesBlurCircleView *blurEffectView;
@property (retain, nonatomic) UIImageView *cannotMinimizeIconView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initBlurEffectView;
- (void)initMinimizeLabel;
- (void)initMinimizeIconView;
- (void)initSelectedMaskView;
- (void)initCannotMinimizeView;
- (void)layoutSubviews;
- (void)changeToCanAddTaskState:(BOOL)a0 forVoiceMsg:(BOOL)a1;
- (void)changeToSelectedState;
- (void)resertNormalState;
- (double)circleIconSize;
- (double)circleSelectIconSize;
- (double)circleRadius;
- (double)circleHightlightedRadius;
- (double)circleContentBottomMargin;
- (double)circleContentRightMargin;
- (id)circleTitle;
- (id)normalCircleIconImage;
- (id)selectedCircleIconImage;
- (id)cannotAddNormalCircleIconImage;
- (id)cannotAddSelectedCircleIconImage;
- (double)canTouchRadius;
- (void).cxx_destruct;

@end
