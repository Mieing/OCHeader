@class NSString;

@interface WCAdCouponInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *couponSenderPhoto;
@property (retain, nonatomic) NSString *couponSenderName;
@property (retain, nonatomic) NSString *couponAppId;
@property (retain, nonatomic) NSString *couponStockId;
@property (retain, nonatomic) NSString *couponName;
@property (retain, nonatomic) NSString *couponDesc;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
