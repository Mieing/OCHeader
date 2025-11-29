@class NSArray, NSNumber;

@interface IESECLiveGoodsCampaignListModel : IESECLiveApiBaseModel

@property (copy, nonatomic) NSArray *campaignList;
@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) NSNumber *logicalClock;

+ (id)campaignListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
