@class NSString;

@interface EcsSubPayInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *outTradeNo;
@property (retain, nonatomic) NSString *transactionId;
@property (nonatomic) unsigned long long payTime;
@property (retain, nonatomic) NSString *midasOrderId;

+ (void)initialize;

@end
