@class UIImageView, MMCPLabel;

@interface MMFinderLivePaymentSettingViewCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *selectionIndicatorView;
@property (retain, nonatomic) UIImageView *wecoinIconView;
@property (retain, nonatomic) MMCPLabel *priceInWecoinNameLabel;
@property (nonatomic) unsigned int priceInWecoin;
@property (nonatomic) BOOL forceDarkMode;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithPriceInWecoin:(unsigned int)a0 optionName:(id)a1 isSelected:(BOOL)a2 forceDarkMode:(BOOL)a3;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
