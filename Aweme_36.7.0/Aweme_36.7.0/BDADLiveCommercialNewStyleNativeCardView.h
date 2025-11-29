@class UIView, NSArray, NSString, UIImageView, UILabel, BDADGradientView, UIButton;

@interface BDADLiveCommercialNewStyleNativeCardView : UIView

@property (retain, nonatomic) NSArray *cardImageURLList;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appTitle;
@property (copy, nonatomic) NSString *cardButtonText;
@property (retain, nonatomic) UIImageView *cardImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cardButton;
@property (retain, nonatomic) BDADGradientView *cardGradientView;
@property (retain, nonatomic) UIView *shadowView;

- (void)configCardData:(id)a0;
- (void)updateCardData:(id)a0;
- (BOOL)isTappedOnButton:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 WithCardModel:(id)a1;
- (id)colorFromRGB:(unsigned long long)a0 alpha:(double)a1;
- (void).cxx_destruct;
- (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2;
- (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)updateUI;

@end
