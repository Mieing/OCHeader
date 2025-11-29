@class NSNumber, NSString;

@interface IESECLiveEnterRoomAutoApplyCouponResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *resultCode;
@property (retain, nonatomic) NSString *openCartToast;
@property (retain, nonatomic) NSNumber *couponID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
