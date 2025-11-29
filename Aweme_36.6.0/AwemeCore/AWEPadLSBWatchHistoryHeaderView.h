@class AWEPadLeftSideBarWatchHistoryHeaderUIConfig, UILabel, DUXBaseImageView, UIView;

@interface AWEPadLSBWatchHistoryHeaderView : UIView

@property (retain, nonatomic) UIView *showAllButton;
@property (retain, nonatomic) DUXBaseImageView *arrowImageView;
@property (retain, nonatomic) UILabel *showAllLabel;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEPadLeftSideBarWatchHistoryHeaderUIConfig *uiConfig;

- (id)initWithUIConfig:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
