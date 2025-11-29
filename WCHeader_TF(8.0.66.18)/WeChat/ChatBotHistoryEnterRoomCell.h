@class ChatBotHistoryEnterRoomItem, UILabel, UIView;

@interface ChatBotHistoryEnterRoomCell : UITableViewCell

@property (retain, nonatomic) UIView *customContentView;
@property (retain, nonatomic) ChatBotHistoryEnterRoomItem *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorLine;

+ (id)reuseIdentifier;

- (id)reuseIdentifier;
- (void)makeCellWithModel:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;

@end
