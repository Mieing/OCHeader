@class NSString;

@interface AWEIMTaskCardStyleActivityModel_CardButtonBody : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long color;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)colorJSONTransformer;

- (void).cxx_destruct;

@end
