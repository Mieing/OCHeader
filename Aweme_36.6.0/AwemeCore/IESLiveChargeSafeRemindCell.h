@class UILabel, NSString, UIImageView;

@interface IESLiveChargeSafeRemindCell : UITableViewCell

@property (retain, nonatomic) UILabel *remindLabel;
@property (retain, nonatomic) NSString *remindText;
@property (retain, nonatomic) UIImageView *icon;

- (void)refreshText:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
