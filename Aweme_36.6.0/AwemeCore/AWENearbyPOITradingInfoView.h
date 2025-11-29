@class NSString, UIImageView, AWEAwemeModel, UILabel, AWENearbyPaddingLabel, UIView;

@interface AWENearbyPOITradingInfoView : UIView <AWENearbyPOITradingInfoViewProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWENearbyPaddingLabel *tagLabel;
@property (retain, nonatomic) UILabel *tradingLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIImageView *rightArrowIconView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL useDarkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithAweme:(id)a0;
- (id)tagTextColor;
- (void)clicked;
- (BOOL)shouleClick;
- (BOOL)shouldShowDetail;
- (id)rgbaColorFromString:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)tagBackgroundColor;

@end
