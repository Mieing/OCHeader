@class NSString;

@interface IESLiveGetBatchClientSettingsKeysModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long type;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
