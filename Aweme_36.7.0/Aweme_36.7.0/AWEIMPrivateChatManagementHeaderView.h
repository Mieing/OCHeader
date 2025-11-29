@class UIButton, UIImageView, UILabel, AWEIMPrivateChatManagementHeaderViewModel, UIView;
@protocol AWEIMPrivateChatManagementHeaderViewDelegate;

@interface AWEIMPrivateChatManagementHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) AWEIMPrivateChatManagementHeaderViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *filterView;
@property (retain, nonatomic) UIButton *filterBtn;
@property (retain, nonatomic) UIImageView *filterImageIcon;
@property (retain, nonatomic) UIView *lineView;
@property (weak, nonatomic) id<AWEIMPrivateChatManagementHeaderViewDelegate> delegate;

+ (id)identifier;

- (void)__setupUI;
- (void)__addKVO;
- (void)__showPrivateChatImportantBubble;
- (void)switchIconWithSelected:(BOOL)a0;
- (void)onFilterBtnClick;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;

@end
