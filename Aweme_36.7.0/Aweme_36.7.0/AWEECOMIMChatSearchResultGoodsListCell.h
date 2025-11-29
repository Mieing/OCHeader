@class BDPCDDynamicCardPriceView, UIImageView, AWEECOMIMChatSearchPriorityMiddleLabelView, UILabel, UIView;

@interface AWEECOMIMChatSearchResultGoodsListCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *goodsIconView;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) UIView *shopNameBkgView;
@property (retain, nonatomic) BDPCDDynamicCardPriceView *priceView;
@property (retain, nonatomic) AWEECOMIMChatSearchPriorityMiddleLabelView *goodsNameLabel;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })cellSize;

- (void)configCellWithModel:(id)a0 matchStr:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
