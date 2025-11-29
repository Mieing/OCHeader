@class FlexActivityPKRecord, UIImageView, UILabel, UIView;

@interface IESLivePKFlexActivityRecordViewCell : UITableViewCell

@property (retain, nonatomic) UIView *ownerAvatarContainerView;
@property (retain, nonatomic) UIImageView *oppositeAvatarImageView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *dashedLineView;
@property (retain, nonatomic) UIView *resultView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *ownerScoreLabel;
@property (retain, nonatomic) UILabel *oppositeScoreLabel;
@property (retain, nonatomic) UIImageView *competeIconImageView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) FlexActivityPKRecord *record;

- (void)updateWithRecord:(id)a0;
- (id)setupTimeString;
- (id)setupDescriptionString;
- (void)setupResultView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupView;

@end
