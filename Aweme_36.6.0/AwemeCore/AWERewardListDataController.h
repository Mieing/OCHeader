@class NSString, NSArray, AWEAwemeModel;

@interface AWERewardListDataController : AWEListDataController

@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSArray *rewardModelList;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long totalRewards;
@property (copy, nonatomic) NSArray *insertRewarderIDs;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)initWithAwemeModel:(id)a0;
- (BOOL)isEmptyData;
- (id)__requestURL;
- (id)__getParams;
- (id)__paramStringFromStringArray:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
