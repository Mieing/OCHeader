@class AWELiveShelfCellCouponView, AWELiveAlignmentBottomLabel;

@interface AWELiveShelfCellPriceView : UIView

@property (retain, nonatomic) AWELiveAlignmentBottomLabel *ticketLabel;
@property (retain, nonatomic) AWELiveAlignmentBottomLabel *priceLabel;
@property (retain, nonatomic) AWELiveAlignmentBottomLabel *consumptionLabel;
@property (retain, nonatomic) AWELiveAlignmentBottomLabel *oldpriceLabel;
@property (retain, nonatomic) AWELiveShelfCellCouponView *couponView;

- (id)regularFontOfSize:(double)a0;
- (id)semiboldFontOfSize:(double)a0;
- (void)setTicketStr:(id)a0 priceStr:(id)a1 consumptionInfo:(id)a2 oldPriceStr:(id)a3 discountStr:(id)a4;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setPrice:(id)a0;
- (void)setupUI;
- (void)updateFrame;
- (id)mediumFontOfSize:(double)a0;

@end
