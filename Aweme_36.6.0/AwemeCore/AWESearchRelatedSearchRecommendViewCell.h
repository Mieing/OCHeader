@class UILabel, AWEDoubleColumnSearchMerchandiseUIInfoModel;

@interface AWESearchRelatedSearchRecommendViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *wordLabel;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseUIInfoModel *UIInfoModel;
@property (nonatomic) BOOL isFromECommerce;

- (void)configUI;
- (void)updateWithModel:(id)a0 UIInfoModel:(id)a1;
- (BOOL)isSimplifiedProductBg;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
