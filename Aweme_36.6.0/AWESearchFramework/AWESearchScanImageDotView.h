@class UIButton, CAAnimationGroup, UIView;

@interface AWESearchScanImageDotView : UIView

@property (retain, nonatomic) UIView *flashView;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double dotViewWidth;
@property (retain, nonatomic) CAAnimationGroup *expandGroups;
@property (retain, nonatomic) CAAnimationGroup *centerGroups;
@property (nonatomic) double animationDuration;
@property (nonatomic) double backgroundMaxWidth;
@property (nonatomic) double centerDotWidth;
@property (copy, nonatomic) id /* block */ dotClickedBlk;

- (void)buttonClicked;
- (void)startFlashAnimation;
- (void)stopFlashAnimation;
- (void)showDotViewWithAnimation:(BOOL)a0;
- (void)hideDotViewWithAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
