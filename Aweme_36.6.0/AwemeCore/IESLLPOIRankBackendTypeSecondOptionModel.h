@class NSString, NSArray;

@interface IESLLPOIRankBackendTypeSecondOptionModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *thirdBackendTypeList;

+ (id)thirdBackendTypeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
