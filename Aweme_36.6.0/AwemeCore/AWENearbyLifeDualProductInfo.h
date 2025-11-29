@class NSString, AWEURLModel;

@interface AWENearbyLifeDualProductInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *priceInfo;
@property (retain, nonatomic) AWEURLModel *headImage;

+ (BOOL)automaticallyDefaultMapping;
+ (id)headImageJSONTransformer;

- (void).cxx_destruct;

@end
