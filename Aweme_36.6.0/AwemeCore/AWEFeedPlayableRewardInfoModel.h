@class AWEFeedPlayableRewardBeforeModel, NSString, AWEFeedPlayableRewardAfterModel;

@interface AWEFeedPlayableRewardInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long rewardType;
@property (retain, nonatomic) AWEFeedPlayableRewardBeforeModel *rewardBefore;
@property (retain, nonatomic) AWEFeedPlayableRewardAfterModel *rewardAfter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rewardBeforeJSONTransformer;
+ (id)rewardAfterJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
