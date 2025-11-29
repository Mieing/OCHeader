@class NSString;

@interface AWEPOIProfileCouponResponseModel : AWEBaseApiModel

@property (nonatomic) long long shouldShowToast;
@property (copy, nonatomic) NSString *toastText;

+ (id)shouldShowToastJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
