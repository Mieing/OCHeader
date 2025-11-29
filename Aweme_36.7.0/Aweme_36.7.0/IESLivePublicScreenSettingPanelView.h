@class UILabel, IESLivePublicScreenSettingPanelViewModel, UITableView;

@interface IESLivePublicScreenSettingPanelView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLivePublicScreenSettingPanelViewModel *viewModel;
@property (retain, nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)setupViews;

@end
