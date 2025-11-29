@class NSString, AWENearbyGrouponLargeCardRoomProductInfo;

@interface AWENearbyGrouponLargeCardRoomInfo : AWEBaseApiModel

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) AWENearbyGrouponLargeCardRoomProductInfo *productInfo;

+ (BOOL)automaticallyDefaultMapping;
+ (id)productInfoJSONTransformer;

- (void).cxx_destruct;

@end
