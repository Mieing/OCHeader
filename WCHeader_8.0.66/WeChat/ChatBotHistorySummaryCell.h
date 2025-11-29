@class ChatBotHistorySummaryItem, UIImageView, UIView, UILabel, MMHeadImageView;

@interface ChatBotHistorySummaryCell : UITableViewCell

@property (retain, nonatomic) UIView *customContentView;
@property (retain, nonatomic) ChatBotHistorySummaryItem *model;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)reuseIdentifier;
- (void)makeCellWithModel:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;

@end
