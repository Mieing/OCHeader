@class NSString, NSArray;

@interface AWEInteractModularizationTextModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *params;

+ (id)paramsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
