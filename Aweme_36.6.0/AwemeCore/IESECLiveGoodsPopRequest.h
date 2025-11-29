@class NSString;

@interface IESECLiveGoodsPopRequest : IESECLiveAPIBaseRequest

@property (nonatomic) long long popType;
@property (copy, nonatomic) NSString *entranceInfo;

- (id)buildParams;
- (void).cxx_destruct;

@end
