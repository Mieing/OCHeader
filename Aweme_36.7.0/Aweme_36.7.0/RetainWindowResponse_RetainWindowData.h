@class RetainWindowResponse_CouponData, RetainWindowResponse_RetainWindowInfoV2;

@interface RetainWindowResponse_RetainWindowData : IESLivePBBaseMessage

@property (retain, nonatomic) RetainWindowResponse_CouponData *couponData;
@property (nonatomic) BOOL hasCouponData;
@property (nonatomic) long long windowStyle;
@property (retain, nonatomic) RetainWindowResponse_RetainWindowInfoV2 *retainWindowInfoV2;
@property (nonatomic) BOOL hasRetainWindowInfoV2;

+ (id)descriptor;

@end
