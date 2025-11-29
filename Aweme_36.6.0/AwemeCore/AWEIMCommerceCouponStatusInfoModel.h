@class NSString;

@interface AWEIMCommerceCouponStatusInfoModel : AWEBaseApiModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *couponID;
@property (nonatomic) long long serverMessageID;
@property (nonatomic) unsigned long long couponStatus;
@property (retain, nonatomic) NSString *showExpireTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
