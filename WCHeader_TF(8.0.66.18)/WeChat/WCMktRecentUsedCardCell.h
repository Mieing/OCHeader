@class WCPayWebImageView, CardHomePageRecentlyUsedCell, CAGradientLayer, NSString, UIView, MMUILabel;

@interface WCMktRecentUsedCardCell : MMMultiMenuTableViewCell <WCPayWebImageViewDelegate>

@property (retain, nonatomic) CardHomePageRecentlyUsedCell *cellData;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WCPayWebImageView *logoImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) WCPayWebImageView *cardBackgroundImgView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *trafficIconView;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) UIView *maskLayerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)updateContentWithRecentlyUsedCellData:(id)a0;
- (void)onLoadWCPayWebImageOK:(id)a0;
- (void).cxx_destruct;

@end
