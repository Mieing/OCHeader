@class UILabel;

@interface AWESearchPOICitySelectionCell : UICollectionViewCell

@property (weak, nonatomic) UILabel *cityNameLabel;

+ (double)cellMinWidth;
+ (double)cityNameLeftSpacing;
+ (id)cityNameNormalStateFont;
+ (double)cityNameRightSpacing;
+ (id)cityNameSelectedStateFont;
+ (double)cellHeight;

- (void)updateUIWithModel:(id)a0 isSelected:(BOOL)a1;
- (id)cityNameNormalStateTextColor;
- (id)cityNameSelectedStateTextColor;
- (void).cxx_destruct;
- (void)setIsSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
