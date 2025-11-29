@class UILabel, UIButton, UIView;

@interface AWEIMFansSyncContactRemarkHeader : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *bgView;
@property (copy, nonatomic) id /* block */ clickButtonBlock;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIButton *headerButton;

+ (id)identifier;

- (void)themeDidChangeNoti:(id)a0;
- (void)clickHeaderButton;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)dealloc;
- (void)setupViews;

@end
