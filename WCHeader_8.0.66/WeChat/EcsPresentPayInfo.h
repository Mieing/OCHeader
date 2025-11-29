@class NSString;

@interface EcsPresentPayInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int orderPayMethod;
@property (retain, nonatomic) NSString *transactionId;
@property (retain, nonatomic) NSString *combineOutTradeNo;
@property (retain, nonatomic) NSString *prepayId;
@property (nonatomic) unsigned int prepayTime;
@property (retain, nonatomic) NSString *midasTransactionId;
@property (nonatomic) long long realPayment;
@property (retain, nonatomic) NSString *combineMidasOrderId;

+ (void)initialize;

@end
