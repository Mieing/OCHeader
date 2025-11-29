@class UIImageView, AWEECOMIMChatSearchPriorityMiddleLabelView;

@interface AWEECOMIMChatSearchResultListChatShopCell : UITableViewCell

@property (retain, nonatomic) UIImageView *shopIconView;
@property (retain, nonatomic) AWEECOMIMChatSearchPriorityMiddleLabelView *shopNameLabel;

+ (id)identifier;
+ (double)cellHeight;

- (void)configCellWithModel:(id)a0 matchStr:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
