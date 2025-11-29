@class NSString, NSDictionary, NSArray;

@interface AWEDTOChargeContentModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long price;
@property (copy, nonatomic) NSString *productTitle;
@property (nonatomic) long long trialTime;
@property (nonatomic) long long trialTimeType;
@property (copy, nonatomic) NSString *musicCheckResult;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) long long isSubscribeContent;
@property (nonatomic) long long paidType;
@property (nonatomic) BOOL isManuallyChoosePaidType;
@property (nonatomic) long long trialStartTime;
@property (copy, nonatomic) NSArray *anchorInfos;
@property (nonatomic) long long subscribeMemberFreeTag;
@property (copy, nonatomic) NSArray *combProducts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorInfosJSONTransformer;
+ (id)combProductsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
