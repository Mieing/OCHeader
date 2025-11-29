@class AWEHPBottomTabLottieParams, AWEHPChannelLottieContentView;

@interface AWEHPChannelBottomBarLottieView : UIView

@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWEHPChannelLottieContentView *contentView;
@property (retain, nonatomic) AWEHPBottomTabLottieParams *params;
@property (readonly, nonatomic) double ratio;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } lottieContentRect;

- (void)hideLottie;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ratio:(double)a1;
- (void)updateRatio:(double)a0;
- (void)showLottieWithParams:(id)a0 showCallBack:(id /* block */)a1 exitCallBack:(id /* block */)a2;
- (void).cxx_destruct;
- (void)updateStatus:(long long)a0;
- (void)layoutSubviews;

@end
