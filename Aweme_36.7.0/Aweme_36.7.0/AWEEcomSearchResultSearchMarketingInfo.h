@class NSString, AWEEcomSearchInsertCouponConfigModel, NSDictionary;

@interface AWEEcomSearchResultSearchMarketingInfo : MTLModel <AWEEcomSearchResultModelAdapterProtocol, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *pendantToast;
@property (retain, nonatomic) AWEEcomSearchInsertCouponConfigModel *insertCouponConfig;
@property (copy, nonatomic) NSDictionary *couponPitayaData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)insertCouponConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)fillMerchandiseResp:(id)a0;
- (void).cxx_destruct;

@end
