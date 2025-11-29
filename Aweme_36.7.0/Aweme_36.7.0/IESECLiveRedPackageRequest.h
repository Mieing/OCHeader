@class NSString;

@interface IESECLiveRedPackageRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *adAdvID;
@property (copy, nonatomic) NSString *redPackageType;

- (id)buildParams;
- (void).cxx_destruct;

@end
