@class AWEPublishVideoSyncContentViewItem, UILabel, UIView, UIButton;

@interface AWEPublishVideoSyncContentVCXiguaCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *tipButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *item;
@property (copy, nonatomic) id /* block */ clickTipBlock;

- (void)hideBottomLine;
- (void)tipButtonTapped:(id)a0;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupViews;

@end
