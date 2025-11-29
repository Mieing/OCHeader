@class NSDictionary, NSString;

@interface AWEGrouponPageInitInfo : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *dualAbParam;
@property (copy, nonatomic) NSDictionary *searchBarConfig;
@property (copy, nonatomic) NSString *transParam;
@property (copy, nonatomic) NSString *nearbyTransformerIcon;
@property (copy, nonatomic) NSString *nearbyPreloadResource;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
