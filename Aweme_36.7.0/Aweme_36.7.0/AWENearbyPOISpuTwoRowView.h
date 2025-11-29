@class NSString, UIImageView, UILabel, UIView, YYLabel;

@interface AWENearbyPOISpuTwoRowView : UIView <AWENearbyPOISpuViewProtocol>

@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) UIImageView *spuImageView;
@property (retain, nonatomic) UILabel *spuTitleLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *originPriceLabel;
@property (retain, nonatomic) YYLabel *discountLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configViewsWithModel:(id)a0;
- (void)hiddenSeperatorLine;
- (void)configViewsWithMode:(id)a0;
- (void)updateViewsWithModelV1:(id)a0;
- (void)updateViewsWithModelV2:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
