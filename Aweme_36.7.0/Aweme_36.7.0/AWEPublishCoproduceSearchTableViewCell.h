@class UIImageView, UILabel, UIView, AWEUserModel;

@interface AWEPublishCoproduceSearchTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *userInfoView;
@property (retain, nonatomic) UILabel *followerCountLabel;
@property (retain, nonatomic) UILabel *verifyInfoLabel;
@property (retain, nonatomic) UIImageView *verifyInfoIcon;
@property (nonatomic) BOOL hasSelected;
@property (nonatomic) BOOL selectAble;
@property (retain, nonatomic) AWEUserModel *userModel;

+ (id)identifier;
+ (double)cellHeight;

- (void)updateNameTextWithModel:(id)a0;
- (void)updateFollowerLabelTextWithModel:(id)a0;
- (void)updateVerifyTextWithModel:(id)a0;
- (void)updateVerifyIconWithModel:(id)a0;
- (void)configCellWithUser:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupUI;

@end
