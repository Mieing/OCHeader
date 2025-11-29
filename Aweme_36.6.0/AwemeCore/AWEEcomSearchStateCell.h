@class UIImageView, AWEDoubleColumnSearchMerchandiseModel, UILabel, UIView, NSDictionary;

@interface AWEEcomSearchStateCell : UICollectionViewCell <AWESearchMerchandiseDoubleColumnCell>

@property (retain, nonatomic) UIView *liveGoodsEmptyView;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIImageView *backGroundView;
@property (retain, nonatomic) UILabel *bottomTitle;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (retain, nonatomic) NSDictionary *paramsInfo;
@property (retain, nonatomic) UILabel *rightTitle;
@property (retain, nonatomic) UIImageView *rightImageView;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)setSearchInfoDict:(id)a0;
- (void)jumpStore;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;

@end
