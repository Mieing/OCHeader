@class NSString, NSData, NSArray;

@interface WCFinderLiveRewardPrepareParams : NSObject

@property (copy, nonatomic) NSString *rewardFinderUsername;
@property (copy, nonatomic) NSString *incomeFinderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (copy, nonatomic) NSString *rewardProductId;
@property (nonatomic) unsigned int rewardProductCount;
@property (nonatomic) unsigned int rewardAmountInWecoin;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int prepareRewardProductCount;
@property (nonatomic) unsigned long long sceneFlag;
@property (retain, nonatomic) NSArray *attackFinderUsernameList;

- (void).cxx_destruct;

@end
