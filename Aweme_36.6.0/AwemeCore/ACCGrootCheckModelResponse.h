@class ACCGrootCheckModel;

@interface ACCGrootCheckModelResponse : ACCBaseApiModel

@property (retain, nonatomic) ACCGrootCheckModel *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
