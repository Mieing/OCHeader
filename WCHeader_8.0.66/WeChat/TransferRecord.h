@class NSString;

@interface TransferRecord : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bankCardSeqno;
@property (retain, nonatomic) NSString *bankCardTailno;
@property (retain, nonatomic) NSString *bankLogo;
@property (retain, nonatomic) NSString *bankName;
@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *payeeName;
@property (retain, nonatomic) NSString *explain;

+ (void)initialize;

@end
