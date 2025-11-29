@class NSString;

@interface AWEHotSpotBottomBarInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;

+ (id)modelWithParamDict:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
