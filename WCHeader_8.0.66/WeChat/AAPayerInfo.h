@class NSString;

@interface AAPayerInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *payerUsername;
@property (nonatomic) unsigned long long totalPayAmount;
@property (nonatomic) unsigned int paySccTime;
@property (nonatomic) int payState;

+ (void)initialize;

@end
