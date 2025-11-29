@class NSDictionary, NSString;

@interface IESLiveGameGetClientSettingResultModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *key;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
