@class UITextView, UITableView, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveSyncMultiDeviceHelpCell : UITableViewCell

@property (retain, nonatomic) UIImageView *arrow;
@property (nonatomic) unsigned long long theme;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *pcHelpContainerView;
@property (retain, nonatomic) UIView *padHelpContainerView;
@property (nonatomic) BOOL isExpanded;
@property (retain, nonatomic) UIImageView *pcHelpImageView;
@property (retain, nonatomic) UIImageView *padHelpImageView;
@property (retain, nonatomic) UILabel *pcTitle;
@property (retain, nonatomic) UILabel *padTitle;
@property (retain, nonatomic) UITextView *padDetailTextView;
@property (retain, nonatomic) UITextView *pcDetailTextView;
@property (retain, nonatomic) UIButton *expandBtn;
@property (retain, nonatomic) UIImageView *padImageView;
@property (retain, nonatomic) UIImageView *pcImageView;
@property (weak, nonatomic) UITableView *tableView;

- (void)clickAction;
- (void)setTextViewText:(BOOL)a0;
- (void)animated:(BOOL)a0 unfold:(BOOL)a1;
- (void)toggleHelp:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)isDark;
- (void)setupViews;
- (id)bgColor;
- (id)detailTextView;

@end
