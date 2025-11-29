@class NSArray, IESECLiveEnterRoomAutoApplyCouponResponseModel, IESECLiveEnterRoomResponseRoomInfo, NSString, NSDictionary;

@interface IESECLiveEnterRoomRequestResponseModel : IESECLiveApiBaseModel

@property (retain, nonatomic) NSArray *cartAnimations;
@property (retain, nonatomic) IESECLiveEnterRoomAutoApplyCouponResponseModel *applyCoupon;
@property (retain, nonatomic) IESECLiveEnterRoomResponseRoomInfo *roomInfo;
@property (copy, nonatomic) NSString *replaceRelatedInfo;
@property (copy, nonatomic) NSDictionary *redirectPathDict;
@property (copy, nonatomic) NSString *ecomLiveRouteRule;

+ (id)cartAnimationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
