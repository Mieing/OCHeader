@class UIImageView, UILabel, AWEDoubleColumnSearchMerchandiseModel;

@interface AWEEcomEmptySearchCell : UICollectionViewCell <AWESearchMerchandiseDoubleColumnCell>

@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UILabel *emptySearchTitle;
@property (retain, nonatomic) UILabel *bottomTitle;
@property (retain, nonatomic) UIImageView *bottomBackGroudView;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (retain, nonatomic) UILabel *rightTitle;
@property (retain, nonatomic) UIImageView *rightImageView;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)jumpShopping;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;

@end
