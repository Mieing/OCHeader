@class BDPCDDynamicCardPriceView, UIImageView, AWEECOMIMChatSearchPriorityMiddleLabelView, UILabel;

@interface AWEECOMIMChatSearchResultListChatGoodsCell : UITableViewCell

@property (retain, nonatomic) UIImageView *goodsIconView;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) AWEECOMIMChatSearchPriorityMiddleLabelView *goodsNameLabel;
@property (retain, nonatomic) BDPCDDynamicCardPriceView *priceView;

+ (id)identifier;
+ (double)cellHeight;

- (void)configCellWithModel:(id)a0 matchStr:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
