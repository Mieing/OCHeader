@interface AWEIMCodeGenRequestConfigModel : AWEBaseDataModel

@property (nonatomic) int retryInterval;
@property (nonatomic) int retryMaxTimes;

+ (id)JSONKeyPathsByPropertyKey;

@end
