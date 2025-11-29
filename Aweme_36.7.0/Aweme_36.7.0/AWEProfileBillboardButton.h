@class NSString, UILabel, UIView, NSAttributedString;

@interface AWEProfileBillboardButton : UIView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *crownImageView;
@property (retain, nonatomic) UILabel *rankNumberLabel;
@property (retain, nonatomic) UILabel *rankTitleLabel;
@property (retain, nonatomic) UIView *billboardTitleBackgroundView;
@property (nonatomic) double scaleRate;
@property (retain, nonatomic) NSString *rankString;
@property (retain, nonatomic) NSString *rankTitle;
@property (retain, nonatomic) NSAttributedString *rankAttributedTitle;

+ (id)attriTextWithArrow:(id)a0 scaleRate:(double)a1;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rankTitleRect;
- (void)p_setupBillboardButton;
- (void)updateLayout;
- (void).cxx_destruct;

@end
