@class EcsFinderFeedBulkBuyInfoView, ZZFLEXAngel, UICollectionView, UIView, EcsFinderFeedNewBuyerInfoView;

@interface EcsFinderFeedSingleProductBar : EcsFinderFeedSingleProductBaseView

@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) EcsFinderFeedBulkBuyInfoView *bulkBuyView;
@property (retain, nonatomic) EcsFinderFeedNewBuyerInfoView *buyerView;
@property (retain, nonatomic) UICollectionView *actionView;
@property (retain, nonatomic) ZZFLEXAngel *actionAngel;

- (void)onViewSizeChanged;
- (void)setDataVM:(id)a0;
- (void)reloadActionView;
- (void)setupUI;
- (void).cxx_destruct;

@end
