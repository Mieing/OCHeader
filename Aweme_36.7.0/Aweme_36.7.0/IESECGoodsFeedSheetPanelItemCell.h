@class UIImageView, UILabel, UIView;

@interface IESECGoodsFeedSheetPanelItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *line;

+ (id)identifier;

- (void)updateUIWithModel:(id)a0 cellPos:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
