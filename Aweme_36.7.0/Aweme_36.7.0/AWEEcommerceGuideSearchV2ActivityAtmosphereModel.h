@class NSString, AWEEcommerceGuideSearchV2SalesInfoModel, AWEEcommerceGuideSearchV2CountDownModel, AWEEcommerceSearchCommonTagModel;

@interface AWEEcommerceGuideSearchV2ActivityAtmosphereModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEEcommerceSearchCommonTagModel *slogan;
@property (nonatomic) unsigned long long reminderType;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2CountDownModel *countDown;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2SalesInfoModel *sales;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sloganJSONTransformer;
+ (id)countDownJSONTransformer;
+ (id)salesDownJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
