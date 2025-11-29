@class UIView, MMUIImageView, MMFinderLiveTask, MMLiveTaskId, MMCPLabel, MMFinderLiveFansGroupSignView, MMUILabel, FinderLiveContact;

@interface MMFinderLiveFansGroupMemberTableViewCell : UITableViewCell

@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) MMUILabel *rankLabel;
@property (retain, nonatomic) MMCPLabel *displayNameLabel;
@property (retain, nonatomic) MMUIImageView *roleIconImageView;
@property (retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView;
@property (retain, nonatomic) MMUILabel *rewardAmountLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) FinderLiveContact *memberContact;
@property (nonatomic) BOOL bNeedSeparatorLine;
@property (retain, nonatomic) MMLiveTaskId *taskId;

+ (double)preferHeight;
+ (double)innerLeftPadding;
+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)shouldAdaptToDarkLight;
- (void)initUI;
- (void)initNameLabel;
- (void)initRoleIconImageView;
- (void)initRewardAmountLabel;
- (void)initFansGroupSignView;
- (void)initSeperatorLine;
- (void)initRankLabel;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithFinderLiveContact:(id)a0 rank:(unsigned long long)a1;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
