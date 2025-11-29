@class MMUIImageView, MMCPLabel, MMFinderLiveFansGroupSignView, MMFinderLiveTaskId, MMUILabel;

@interface MMFinderLiveFansGroupMemberSelfIntimacyView : UIView

@property (retain, nonatomic) MMUILabel *rankLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMCPLabel *displayNameLabel;
@property (retain, nonatomic) MMUIImageView *roleIconImageView;
@property (retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView;
@property (retain, nonatomic) MMUILabel *rewardAmountLabel;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;

- (id)initWithTaskId:(id)a0;
- (void)initUI;
- (void)initNameLabel;
- (void)initDescLabel;
- (void)initRoleIconImageView;
- (void)initRewardAmountLabel;
- (void)initFansGroupSignView;
- (void)initRankLabel;
- (void)layoutSubviews;
- (void)updateWithFinderLiveContact:(id)a0 rank:(unsigned long long)a1 intimacyToPrevRank:(unsigned int)a2;
- (id)liveTask;
- (void).cxx_destruct;

@end
