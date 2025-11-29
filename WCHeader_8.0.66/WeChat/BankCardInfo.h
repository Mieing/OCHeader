@class NSString;

@interface BankCardInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bindSerialno;
@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *bankName;
@property (retain, nonatomic) NSString *cardTail;

+ (void)initialize;

@end
