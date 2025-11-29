@class NSString, AWEDoubleColumnSearchMerchandiseModel, NSDictionary, UILabel, YYAnimatedImageView, AWEMerchandiseCouponCountdownView;

@interface AWEMerchandiseNewUserCouponCell : AWESearchCachalotECommerceBaseCell <AWEMerchandiseCouponCountdownViewDelegate>

@property (retain, nonatomic) YYAnimatedImageView *backgroundIcon;
@property (retain, nonatomic) YYAnimatedImageView *headIcon;
@property (retain, nonatomic) UILabel *headTextSymbolLabel;
@property (retain, nonatomic) UILabel *headTextLabel;
@property (retain, nonatomic) UILabel *contentTextLabel;
@property (retain, nonatomic) UILabel *countdownHeadTextLabel;
@property (retain, nonatomic) AWEMerchandiseCouponCountdownView *countdownView;
@property (retain, nonatomic) UILabel *countdownTailTextLabel;
@property (retain, nonatomic) UILabel *countdownEndTextLabel;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (copy, nonatomic) NSDictionary *searchInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)trackCardShow;
- (void)couponCountdownView:(id)a0 countdownStatusDidChange:(unsigned long long)a1;
- (id)fontWithFontSize:(double)a0 isBold:(BOOL)a1;
- (id)fontWithFontClass:(long long)a0 isBold:(BOOL)a1;
- (void)updateCountdownTextHiddenStatus;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
