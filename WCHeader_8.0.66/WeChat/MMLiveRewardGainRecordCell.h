@class MMFinderLiveFansGroupSignView, MMCPLabel, MMFinderLiveRewardGainsInfo, UIImageView, MMFinderLiveTask, MMFinderLiveLiveRoleSignView, MMFinderLiveGlobalRankSignView;
@protocol MMLiveRewardGainRecordCellDelegate;

@interface MMLiveRewardGainRecordCell : MMTableViewCell

@property (retain, nonatomic) MMCPLabel *rankLabel;
@property (retain, nonatomic) MMCPLabel *displayNameLabel;
@property (retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView;
@property (retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView;
@property (retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView;
@property (retain, nonatomic) MMFinderLiveRewardGainsInfo *rewardGainsInfo;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMCPLabel *rewardGainValueLabel;
@property (nonatomic) BOOL forceDarkMode;
@property (nonatomic) long long rank;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (weak, nonatomic) id<MMLiveRewardGainRecordCellDelegate> cellDelegate;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })getCellSize;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithRewardGainsInfo:(id)a0 forceDarkMode:(BOOL)a1 rank:(long long)a2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
