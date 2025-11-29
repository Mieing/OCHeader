@class NSArray, NSString, NSDictionary;

@interface AWEECOMIMCouponModel : NSObject <AWEECOMIMSubCardCouponProtocol>

@property (copy, nonatomic) NSArray *discountTypeArr;
@property (copy, nonatomic) NSArray *amountTypeArr;
@property (copy, nonatomic) NSArray *fullAmountTypeArr;
@property (copy, nonatomic) NSString *disCountDisplayString;
@property (copy, nonatomic) NSString *couponName;
@property (copy, nonatomic) NSString *urlString;
@property (nonatomic) long long originCouponType;
@property (nonatomic) long long couponType;
@property (nonatomic) long long kefuCouponType;
@property (nonatomic) long long periodType;
@property (nonatomic) long long validPeriod;
@property (copy, nonatomic) NSString *startTimeString;
@property (copy, nonatomic) NSString *expiretimeString;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *couponMetaId;
@property (copy, nonatomic) NSString *couponId;
@property (copy, nonatomic) NSString *couponUserId;
@property (copy, nonatomic) NSString *couponSrc;
@property (copy, nonatomic) NSString *extraMap;
@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *couponTypeString;
@property (copy, nonatomic) NSString *disCountString;
@property (nonatomic) long long disCountInFen;
@property (nonatomic) long long creditInFen;
@property (nonatomic) long long thresholdInFen;
@property (copy, nonatomic) NSString *thresholdString;
@property (readonly, copy, nonatomic) NSString *couponDesc;
@property (copy, nonatomic) NSString *couponTypeDesc;
@property (copy, nonatomic) NSString *couponValidTimeStr;
@property (readonly, copy, nonatomic) NSString *couponBtnText;
@property (readonly, nonatomic) BOOL isCouponReceived;
@property (readonly, nonatomic) BOOL isCouponValid;
@property (copy, nonatomic) NSDictionary *extraMapDict;
@property (nonatomic) BOOL shouldHiddenReceivedImg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showOnePriceNum:(long long)a0;

- (BOOL)isCouponUnUsed;
- (BOOL)isCouponExpired;
- (BOOL)isCouponUsed;
- (BOOL)isCouponNotReceived;
- (id)formatDateString:(id)a0;
- (id)validTimeDateStringWithStartTimeString:(id)a0 expireTimeString:(id)a1;
- (void).cxx_destruct;

@end
