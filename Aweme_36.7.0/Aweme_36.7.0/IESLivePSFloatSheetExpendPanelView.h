@class UITableView, UIImageView, UIView, UILabel, IESLivePSFloatSheetExpendPanelViewModel;

@interface IESLivePSFloatSheetExpendPanelView : UIView

@property (retain, nonatomic) IESLivePSFloatSheetExpendPanelViewModel *viewModel;
@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UIImageView *leftReferMark;
@property (retain, nonatomic) UIImageView *rightReferMark;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UITableView *tableView;

- (void)refreshView;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
