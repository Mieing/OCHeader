@class NSString;

@interface IESLiveGameGetGeckoInfoParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
