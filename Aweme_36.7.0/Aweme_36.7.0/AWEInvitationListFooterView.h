@class UIView;

@interface AWEInvitationListFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) BOOL lineViewHidden;

+ (double)cellFooterHeight;
+ (double)lineMarginHeight;
+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_setupUI;

@end
