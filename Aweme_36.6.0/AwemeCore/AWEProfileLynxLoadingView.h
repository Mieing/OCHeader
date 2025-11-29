@class NSString, AWEUILoadingView;

@interface AWEProfileLynxLoadingView : UIView <BDXLoadingViewProtocol>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void).cxx_destruct;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
