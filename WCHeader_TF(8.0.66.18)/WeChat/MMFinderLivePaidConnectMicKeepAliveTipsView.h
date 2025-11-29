@class UILabel, MMFinderLiveConnectMicUser, MMUIButton;

@interface MMFinderLivePaidConnectMicKeepAliveTipsView : MMRectTriangleArrowView

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) MMUIButton *keepAliveButton;
@property (copy, nonatomic) id /* block */ onTapKeepAlive;
@property (retain, nonatomic) MMFinderLiveConnectMicUser *micUser;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1;
- (void)initUI;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (void)sizeToFitWidth:(double)a0;
- (void)layoutSubviews;
- (void)onClickKeepAliveButton;
- (void).cxx_destruct;

@end
