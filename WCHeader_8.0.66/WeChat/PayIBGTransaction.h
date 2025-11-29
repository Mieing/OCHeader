@class NSString, NSMutableArray;

@interface PayIBGTransaction : WXPBGeneratedMessage

@property (nonatomic) unsigned int modifyTimestamp;
@property (retain, nonatomic) NSString *buyBankName;
@property (retain, nonatomic) NSString *prepayId;
@property (nonatomic) unsigned int totalFee;
@property (retain, nonatomic) NSString *feeType;
@property (retain, nonatomic) NSString *spName;
@property (retain, nonatomic) NSString *transactionId;
@property (nonatomic) unsigned int tradeStatus;
@property (retain, nonatomic) NSString *des;
@property (retain, nonatomic) NSString *payStatusName;
@property (nonatomic) unsigned long long originalTotalFee;
@property (retain, nonatomic) NSMutableArray *discountArray;

+ (void)initialize;

@end
