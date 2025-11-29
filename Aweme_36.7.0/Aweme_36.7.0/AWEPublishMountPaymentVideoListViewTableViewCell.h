@class UIImageView, AWEAwemeModel, UILabel, DUXCheckBox;

@interface AWEPublishMountPaymentVideoListViewTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *videoCoverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *digIcon;
@property (retain, nonatomic) UILabel *playLabel;
@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (copy, nonatomic) id /* block */ checkBoxClickBlock;

+ (id)reuseIdentifier;
+ (double)cellHeight;

- (void)configureUI;
- (void)updateUIWithModel:(id)a0;
- (id)minuteFormatStringWithDuration:(id)a0;
- (id)secondsFormatStringWithDuration:(id)a0;
- (id)getFormatTimeStringWithDuration:(id)a0;
- (void)updateSelectStatusWithStatus:(BOOL)a0 clickEnable:(BOOL)a1;
- (void)updateSelectCheckBox:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
