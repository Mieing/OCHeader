@class NSArray, NSString;

@interface AWENearbyGrouponTabLoadMoreFooter : AWEBaseApiModel

@property (copy, nonatomic) NSArray *desc;
@property (copy, nonatomic) NSString *jumpSchema;

+ (BOOL)automaticallyDefaultMapping;
+ (id)descJSONTransformer;

- (void).cxx_destruct;

@end
