@class NSArray, NSString, NSDictionary;

@interface AWESoftADAwardRequestModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long rewardType;
@property (copy, nonatomic) NSArray *viewedVideo;
@property (copy, nonatomic) NSArray *singleViewTimeList;
@property (copy, nonatomic) NSArray *singleVideoRewardList;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long highestReward;
@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
