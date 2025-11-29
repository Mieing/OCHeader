@class UIImageView, IESECShopRecommendTitleModel;

@interface IESECShopRecommendTitleView : UIView {
    BOOL _isTopTitle;
    IESECShopRecommendTitleModel *_model;
}

@property (retain, nonatomic) UIImageView *imageView;

- (void)bindWithModel:(id)a0;
- (void)bindWithModel:(id)a0 isTopTitle:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)updateViews;

@end
