@class NSString, NSNumber;

@interface IESLLPOIOptionModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *code;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
