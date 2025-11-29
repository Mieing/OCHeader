@class UILabel, UIImageView, UIView;

@interface AWETimeLockSetTriggerTimeTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *triggerTimeLabel;
@property (retain, nonatomic) UIImageView *checkMark;
@property (retain, nonatomic) UIView *lineView;

+ (id)identifier;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
