@class UILabel, UIView, ChatBotPrologueMsg;

@interface ChatBotPrologueMsgBaseCell : UITableViewCell

@property (retain, nonatomic) ChatBotPrologueMsg *prologueMsg;
@property (nonatomic) double contentWidth;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *cardView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (double)getCellHeight;
- (void)setupUI;
- (long long)getTitleLines;
- (id)getTitle;
- (id)getDesc;
- (void)layoutCardView;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)configureWithPrologueMsg:(id)a0;
- (void).cxx_destruct;

@end
