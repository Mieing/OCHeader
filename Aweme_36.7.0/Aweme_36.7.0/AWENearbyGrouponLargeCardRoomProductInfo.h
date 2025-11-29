@class NSArray, NSString;

@interface AWENearbyGrouponLargeCardRoomProductInfo : AWEBaseApiModel

@property (copy, nonatomic) NSArray *products;
@property (copy, nonatomic) NSString *title;

+ (BOOL)automaticallyDefaultMapping;
+ (id)productsJSONTransformer;

- (void).cxx_destruct;

@end
