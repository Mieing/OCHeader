@class NSString, AWEGradientView, UIView;

@interface AWEGeneralSearchWebLoadingView : UIView <AWESearchCachalotWebLoadingViewProtocol>

@property (retain, nonatomic) UIView *background;
@property (retain, nonatomic) UIView *shimmerContainer;
@property (retain, nonatomic) AWEGradientView *shimmer;
@property (retain, nonatomic) UIView *block0;
@property (retain, nonatomic) UIView *block1;
@property (retain, nonatomic) UIView *block2;
@property (retain, nonatomic) UIView *block3;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startShimming;
- (void)stopShimming;
- (void)setupSubview;
- (void)setupShimmerMask;
- (id)generateBlock;
- (id)generateContent;
- (void).cxx_destruct;
- (void)registerNotifications;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)themeDidChange;
- (void)setupContent;

@end
