@class AWELeftSideBarWatchVideoLaterHeaderUIConfig, UILabel, DUXBaseImageView, UIView;

@interface AWELSBWatchVideoLaterHeaderView : UIView

@property (retain, nonatomic) UIView *showAllButton;
@property (retain, nonatomic) DUXBaseImageView *arrowImageView;
@property (retain, nonatomic) UILabel *showAllLabel;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWELeftSideBarWatchVideoLaterHeaderUIConfig *uiConfig;

- (id)initWithUIConfig:(id)a0;
- (void)showAllTip:(BOOL)a0;
- (void)updateShowAllTextWithUnreadCount:(long long)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
