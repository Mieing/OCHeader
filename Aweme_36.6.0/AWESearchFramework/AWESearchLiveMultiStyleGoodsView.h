@class AWESearchLiveSearchMultiGoodsListMediumView, NSArray, AWESearchLiveSearchGoodsView, AWEAwemeModel, NSIndexPath;
@protocol AWESearchLiveMultiStyleGoodsViewDelegate;

@interface AWESearchLiveMultiStyleGoodsView : UIView

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSArray *goodsModelArray;
@property (retain, nonatomic) AWESearchLiveSearchGoodsView *goodsView;
@property (retain, nonatomic) AWESearchLiveSearchMultiGoodsListMediumView *mediumListGoodsView;
@property (weak, nonatomic) id<AWESearchLiveMultiStyleGoodsViewDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *indexPath;

+ (double)getHeightWithModel:(id)a0 andWidth:(double)a1;

- (void)onGoodsViewClickedWith:(id)a0 index:(long long)a1;
- (void)updateMultiStyleGoodsUI;
- (void)updateMultiStyleGoodsBackgroundColor:(id)a0;
- (void)dismissGoodsView;
- (void)dismissMediumListGoodsView;
- (void)showGoodsView;
- (void)showMediumListGoodsView;
- (void)goodsViewTapAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
