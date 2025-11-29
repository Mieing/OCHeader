@class NSString;

@interface AAPayer : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *payerUsername;
@property (nonatomic) unsigned long long totalPayAmount;
@property (nonatomic) unsigned long long refundAmount;
@property (nonatomic) unsigned int payState;
@property (retain, nonatomic) NSString *payReason;
@property (retain, nonatomic) NSString *solitaireContent;

+ (void)initialize;

@end
