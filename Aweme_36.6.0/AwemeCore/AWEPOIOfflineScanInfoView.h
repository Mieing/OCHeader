@class UIImageView, UILabel, DUXButton;
@protocol AWEPOIOfflineScanInfoButtonsDelegate;

@interface AWEPOIOfflineScanInfoView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *priceTitleLabel;
@property (retain, nonatomic) UILabel *priceSubtitleLabel;
@property (retain, nonatomic) UILabel *couponTitleLabel;
@property (retain, nonatomic) UILabel *couponSubtitleLabel;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) DUXButton *cancelButton;
@property (retain, nonatomic) UIImageView *receivedIcon;
@property (weak, nonatomic) id<AWEPOIOfflineScanInfoButtonsDelegate> buttonClickDelegate;

+ (id)aweCouponFormattedPriceWithOriginalPrice:(id)a0;
+ (double)fontSizeOfPriceTitle:(id)a0;

- (void)onCancel:(id)a0;
- (void)refreshViewWithModel:(id)a0;
- (void)hideReceivedIcon:(BOOL)a0;
- (void)updatePriceTitle:(id)a0;
- (void)onConfirm:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setLoadingState:(BOOL)a0;

@end
