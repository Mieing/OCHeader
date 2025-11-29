@class NSString, AWEUILoadingView, MASConstraint;

@interface AWEBulletLoadingView : UIView <BDXLoadingViewProtocol>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) MASConstraint *topPaddingConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setNeedsLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToSuperview:(id)a0;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
