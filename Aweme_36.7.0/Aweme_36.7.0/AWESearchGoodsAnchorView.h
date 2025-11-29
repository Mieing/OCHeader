@class AWESearchLiveSearchGoodsView, AWESearchEcommerceInfoAnchorModel;

@interface AWESearchGoodsAnchorView : UIView

@property (retain, nonatomic) AWESearchEcommerceInfoAnchorModel *model;
@property (retain, nonatomic) AWESearchLiveSearchGoodsView *singleGoodsView;
@property (copy, nonatomic) id /* block */ clickLiveGoodsBlock;
@property (copy, nonatomic) id /* block */ liveGoodsLoadBlock;

- (id)douyinNumberABCFontOfSize:(double)a0;
- (void)clickGoodView:(id)a0;
- (void)updateWithModel:(id)a0 userWindowUIType:(long long)a1 liveWindowStyle:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
