@class AWENotificationModelNew, UILabel, UIView, YYLabel;
@protocol AWEIMAccountMigrateCellDelegate;

@interface AWEIMAccountMigrateCell : UITableViewCell

@property (retain, nonatomic) UIView *cardContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) AWENotificationModelNew *model;
@property (weak, nonatomic) id<AWEIMAccountMigrateCellDelegate> delegate;

+ (double)heightOfCellWithModel:(id)a0;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)p_addTextTapAction;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
