@class LbsRecommendPoiItem, UIImageView, MMWebImageView, NSMutableArray, MMUILabel;

@interface PoiNearbyItemTableViewCell : MMUIView {
    LbsRecommendPoiItem *_poiItem;
    MMWebImageView *_iconView;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    MMUILabel *_descLabel;
    UIImageView *_remarkBKImage;
    MMUILabel *_personalRemarkLabel;
    NSMutableArray *_adIconViewList;
}

- (id)initWithLbsRecommendPoiItem:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)initView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
