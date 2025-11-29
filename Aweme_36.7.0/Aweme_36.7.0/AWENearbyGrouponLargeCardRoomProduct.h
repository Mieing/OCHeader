@class NSString, AWEURLModel;

@interface AWENearbyGrouponLargeCardRoomProduct : AWEBaseApiModel

@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) AWEURLModel *cover;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *originPrice;
@property (nonatomic) BOOL isShowing;

+ (BOOL)automaticallyDefaultMapping;
+ (id)coverJSONTransformer;

- (void).cxx_destruct;

@end
