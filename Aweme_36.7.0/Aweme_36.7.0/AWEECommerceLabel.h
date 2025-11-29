@class NSString, AWEURLModel;

@interface AWEECommerceLabel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *contentText;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *extra;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
