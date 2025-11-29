@class UITableView, CreateAIRemind, UIView;

@interface ChatBotVOIPBoardViewRemindCell : ChatBotVOIPBoardViewBaseCell

@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) CreateAIRemind *remindModel;
@property (retain, nonatomic) UIView *cardView;

- (id)initWithMessage:(id)a0 openScene:(int)a1;
- (double)setupViewWithWidth:(double)a0;
- (void)layoutCardView;
- (void)layoutTCardViewInner;
- (void)updateBaseReportDataPB:(id)a0;
- (void).cxx_destruct;

@end
