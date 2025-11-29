@class AWEPublishVideoSyncContentViewItem, UIImageView, UISwitch, UILabel, UIView, UIButton;

@interface AWEPublishVideoSyncContentVCTabelViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UISwitch *switcher;
@property (retain, nonatomic) UIButton *tipButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *item;
@property (copy, nonatomic) id /* block */ onChangeBlock;
@property (copy, nonatomic) id /* block */ clickTipBlock;

- (void)hideBottomLine;
- (void)onCellClicked;
- (void)tipButtonTapped:(id)a0;
- (void)onSwitcherToggled:(id)a0;
- (void)updateViewWithBanMode:(BOOL)a0;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupViews;

@end
