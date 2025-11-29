@class NSNumber, NSString, AWEFansPushRewardModel;

@interface AWEFansPushReverseInWeekDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long total;
@property (retain, nonatomic) AWEFansPushRewardModel *rewardData;
@property (copy, nonatomic) NSString *topTitle;
@property (nonatomic) long long urgeLiveCnt;
@property (nonatomic) long long sendGiftCnt;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)getParams;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
