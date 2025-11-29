@class NSString;

@interface IESECLiveGoodsPriceRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *productIDs;
@property (copy, nonatomic) NSString *promotionIDs;
@property (copy, nonatomic) NSString *entranceInfo;
@property (nonatomic) long long from;

- (id)buildParams;
- (void).cxx_destruct;

@end
