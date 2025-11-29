@class ChatBotHistoryChatDateItem, UILabel, UIView;

@interface ChatBotHistoryChateDateCell : UITableViewCell

@property (retain, nonatomic) UIView *customContentView;
@property (retain, nonatomic) ChatBotHistoryChatDateItem *model;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (id)reuseIdentifier;
- (void)makeCellWithModel:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;

@end
