@class UIImageView, UILabel;

@interface IESLiveXPlayNetworkStatusView : UIView

@property (retain, nonatomic) UIImageView *networkQualityImgView;
@property (retain, nonatomic) UILabel *operationDelayLabel;
@property (retain, nonatomic) UILabel *rttLabel;

- (void)updateNetworkStatus:(long long)a0 rtt:(long long)a1;
- (void)updateOperationDelay:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
