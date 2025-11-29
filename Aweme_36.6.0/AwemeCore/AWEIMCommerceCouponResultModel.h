@class NSString, AWEIMCommerceCouponStatusInfoModel;

@interface AWEIMCommerceCouponResultModel : AWEBaseApiModel <MTLJSONSerializing>

@property (nonatomic) long long applyStatus;
@property (retain, nonatomic) NSString *toast;
@property (retain, nonatomic) AWEIMCommerceCouponStatusInfoModel *statusModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)statusModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
