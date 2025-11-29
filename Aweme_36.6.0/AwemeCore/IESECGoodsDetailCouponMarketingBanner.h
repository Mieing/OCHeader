@class NSArray, NSString;

@interface IESECGoodsDetailCouponMarketingBanner : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *leftElements;
@property (copy, nonatomic) NSArray *rightElements;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSString *bgImgUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rightElementsJSONTransformer;
+ (id)leftElementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
