@class NSArray, NSString;

@interface IESECShopApplyCouponMetaRespItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long couponMetaId;
@property (copy, nonatomic) NSArray *couponIds;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
