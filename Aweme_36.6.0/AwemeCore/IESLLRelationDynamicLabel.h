@class NSDictionary, NSString;

@interface IESLLRelationDynamicLabel : IESLLifeBaseApiModel

@property (nonatomic) long long labelSubtype;
@property (retain, nonatomic) NSDictionary *logExtraDic;
@property (nonatomic) long long labelType;
@property (copy, nonatomic) NSString *logExtra;

+ (id)labelTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)_logExtraDictionary;
- (void).cxx_destruct;

@end
