@class NSString, NSMutableArray;

@interface EcsCouponKey : WXPBGeneratedMessage

@property (nonatomic) unsigned long long bizuin;
@property (nonatomic) unsigned long long couponId;
@property (nonatomic) int type;
@property (nonatomic) unsigned long long userCouponId;
@property (retain, nonatomic) NSMutableArray *bizuinList;
@property (retain, nonatomic) NSString *outBatchId;
@property (retain, nonatomic) NSString *outUserCouponId;

+ (void)initialize;

@end
