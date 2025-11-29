@class NSString;

@interface RefundInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long orderRefundTime;
@property (nonatomic) unsigned long long amount;
@property (nonatomic) unsigned long long spuAmount;
@property (nonatomic) unsigned long long expressAmount;
@property (retain, nonatomic) NSString *refundOrderId;

+ (void)initialize;

@end
