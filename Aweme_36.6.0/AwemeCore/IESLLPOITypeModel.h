@class NSString;

@interface IESLLPOITypeModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *name;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
