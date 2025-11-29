@class AWEAwemeModel, UIImageView, AWEButton, UILabel, UIView, AWECouponModel;
@protocol AWEPOICouponProtocol;

@interface AWEPOICouponView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *topBorderImageView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *congratulateLabel;
@property (retain, nonatomic) UILabel *merchantNameLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) AWEButton *confirmButton;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) AWECouponModel *couponModel;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) BOOL frameIsAnimating;
@property (nonatomic) BOOL bgColorIsAnimating;
@property (weak, nonatomic) id<AWEPOICouponProtocol> delegate;

- (void)confirmButtonClicked:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 couponModel:(id)a1 awemeModel:(id)a2;
- (void)showCounponView;
- (void)fillinData;
- (void)addGradientBackgroundForHeaderImageView;
- (void)dismissCounponView;
- (void).cxx_destruct;
- (void)setupUI;
- (void)backgroundTapped:(id)a0;

@end
