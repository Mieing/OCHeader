@class NSString;

@interface IESECLiveGoodsCampaignRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *pIDs;
@property (nonatomic) long long from;

- (id)buildParams;
- (void).cxx_destruct;

@end
