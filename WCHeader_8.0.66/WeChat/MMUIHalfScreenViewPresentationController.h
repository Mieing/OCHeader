@class UIView;

@interface MMUIHalfScreenViewPresentationController : UIPresentationController

@property (nonatomic) double presentedHeight;
@property (nonatomic) double presentedWidth;
@property (nonatomic) double presentedLeft;
@property (retain, nonatomic) UIView *coverView;
@property (nonatomic) BOOL isHideBackgroupMask;
@property (nonatomic) BOOL isResetPresentedViewFrame;

- (void)containerViewWillLayoutSubviews;
- (void)coverViewClick;
- (void).cxx_destruct;

@end
