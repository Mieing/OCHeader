@class UILabel;

@interface AWESearchNoSelectedDropDownExpandViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *noSelectLabel;

+ (id)identifier;

- (void)configWithComponentModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
