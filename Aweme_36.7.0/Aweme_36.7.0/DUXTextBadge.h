@class UILabel, DUXTextBadgeViewConfig;

@interface DUXTextBadge : UIView

@property (retain, nonatomic) DUXTextBadgeViewConfig *config;
@property (retain, nonatomic) UILabel *textLabel;

- (void).cxx_destruct;
- (id)init;
- (id)initWithText:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
