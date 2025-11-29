@class NSString;

@interface IESLiveGameGetClientSettingParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL stableFlag;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
