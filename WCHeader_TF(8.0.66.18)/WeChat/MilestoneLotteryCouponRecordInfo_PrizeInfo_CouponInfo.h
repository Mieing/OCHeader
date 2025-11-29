@class NSString, NSData;

@interface MilestoneLotteryCouponRecordInfo_PrizeInfo_CouponInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *expiredWording;
@property (nonatomic) unsigned int couponStatus;
@property (retain, nonatomic) NSString *buttonWording;
@property (retain, nonatomic) NSData *jumpInfo;
@property (nonatomic) BOOL couponIsExpired;

+ (void)initialize;

@end
