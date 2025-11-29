@class UITapGestureRecognizer, MMFinderLiveLotteryInfo, UIImageView, MMUIView, MMUILabel;

@interface MMLiveLotteryCardGoodsView : MMUIView

@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) MMUIView *goodsTitleView;
@property (retain, nonatomic) MMUILabel *goodsTitleLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo;
@property (copy, nonatomic) id /* block */ cardGoodsViewBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)cardGoodsViewClick;
- (void)createUI;
- (void)layoutUI;
- (void)updateWithLotteryInfo:(id)a0;
- (void).cxx_destruct;

@end
