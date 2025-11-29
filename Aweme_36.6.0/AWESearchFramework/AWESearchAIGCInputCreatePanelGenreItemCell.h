@class UILabel;

@interface AWESearchAIGCInputCreatePanelGenreItemCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) BOOL isSelected;

+ (struct CGSize { double x0; double x1; })sizeWithModel:(id)a0;
+ (id)nameLabelFontWithModel:(id)a0;
+ (id)identifier;

- (void)themeChange;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
