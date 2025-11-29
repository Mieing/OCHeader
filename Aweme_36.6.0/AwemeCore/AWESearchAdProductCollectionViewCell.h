@class UIImageView, UILabel, AWEDoubleColumnSearchAdProductInfoModel;

@interface AWESearchAdProductCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEDoubleColumnSearchAdProductInfoModel *adProductInfo;
@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *priceLabel;

+ (id)identifier;

- (void)configUI;
- (void)configAdProductCellWithModel:(id)a0;
- (void)updateProductImageViewLayout;
- (void)updateSubviewUIWithIsLiveCard:(BOOL)a0 currentThemeStyle:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
