@class NSString, UIImageView, UILabel, UIView;

@interface AWEProfileCraftsmanBillboardButton : UIView

@property (nonatomic) BOOL shouldHide;
@property (retain, nonatomic) NSString *rankString;
@property (retain, nonatomic) NSString *rankTitle;
@property (retain, nonatomic) UILabel *rankTitleLabel;
@property (retain, nonatomic) UIImageView *crownImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *billboardTitleBackgroundView;
@property (nonatomic) double scaleRate;
@property (nonatomic) double maxWidth;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rankTitleRect;
- (id)shorterCraftsmanTitleWithShortCityName:(id)a0 career:(id)a1 billboardType:(id)a2 index:(id)a3;
- (void)setCraftsmanTitle:(id)a0 shortCityName:(id)a1 career:(id)a2 billboardType:(id)a3 index:(id)a4;
- (void)updateLayout;
- (void).cxx_destruct;

@end
