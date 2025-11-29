@class AWEDoubleColumnSearchMerchandiseModel, IESECLLView;
@protocol AWEECLandingCommodityCardCellDelegate;

@interface AWEECLandingCommodityCardCell : UICollectionViewCell {
    IESECLLView *_containerView;
    AWEDoubleColumnSearchMerchandiseModel *_merchandise;
}

@property (weak, nonatomic) id<AWEECLandingCommodityCardCellDelegate> delegate;

- (void)buyButtonDidClick:(id)a0;
- (void)updateWithMerchandiseModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
