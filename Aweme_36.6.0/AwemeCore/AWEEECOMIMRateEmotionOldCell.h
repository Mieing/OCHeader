@class UILabel, BDImageView;

@interface AWEEECOMIMRateEmotionOldCell : UICollectionViewCell

@property (retain, nonatomic) BDImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;

+ (id)rateNameNormalColor;
+ (id)rateNameSelectColor;
+ (id)rateNameNormalFont;
+ (id)rateNameSelectedFont;
+ (id)identifier;

- (id)nameLabelColorWithModel:(id)a0 isStack:(BOOL)a1;
- (id)nameLabelFontWithModel:(id)a0 isStack:(BOOL)a1;
- (id)iconUrlWithModel:(id)a0 isStack:(BOOL)a1;
- (void)configWithCellModel:(id)a0 rateServiceModel:(id)a1 animateEnable:(BOOL)a2 iconSize:(struct CGSize { double x0; double x1; })a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
