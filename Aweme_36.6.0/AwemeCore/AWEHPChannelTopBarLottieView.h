@class AWEHPChannelLottieParams, AWEHPChannelLottieContentView;

@interface AWEHPChannelTopBarLottieView : UIView

@property (retain, nonatomic) AWEHPChannelLottieContentView *contentView;
@property (readonly, nonatomic) BOOL isShowing;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) AWEHPChannelLottieParams *params;

- (void)hideLottie;
- (void)showLottieWithParams:(id)a0 playParams:(id)a1 showCallBack:(id /* block */)a2 exitCallBack:(id /* block */)a3;
- (void).cxx_destruct;
- (void)updateStatus:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
