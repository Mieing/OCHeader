@class NSString, RetainWindowResponse_CouponData, NSMutableArray;

@interface RetainWindowResponse_RetainWindowInfoV2 : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) RetainWindowResponse_CouponData *couponData;
@property (nonatomic) BOOL hasCouponData;
@property (retain, nonatomic) NSMutableArray *productInfosArray;
@property (readonly, nonatomic) unsigned long long productInfosArray_Count;
@property (copy, nonatomic) NSString *expireSuffixText;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *cancelText;
@property (nonatomic) long long minWatchTime;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long countdownTime;
@property (copy, nonatomic) NSString *kolUserTag;

+ (id)descriptor;

@end
