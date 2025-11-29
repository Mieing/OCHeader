@class NSMutableArray, IESECShopAfterLiveCardModel, IESECLLView;

@interface IESECShopAfterLiveCard : UIView {
    NSMutableArray *_productViews;
}

@property (retain, nonatomic) IESECLLView *contentView;
@property (retain, nonatomic) IESECShopAfterLiveCardModel *cardModel;
@property (copy, nonatomic) id /* block */ cardDidMoveToSuperview;

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;

@end
