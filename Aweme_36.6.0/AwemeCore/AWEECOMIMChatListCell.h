@class AWEECOMIMChatListCellV2View;

@interface AWEECOMIMChatListCell : UITableViewCell

@property (retain, nonatomic) AWEECOMIMChatListCellV2View *v2View;

+ (id)identifier;
+ (double)cellHeight;

- (void)configCellWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
