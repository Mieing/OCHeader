@class NSString;

@interface BankInfoItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bankName;
@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *cardType;
@property (retain, nonatomic) NSString *mobileNo;
@property (retain, nonatomic) NSString *bankNoSuffix;
@property (retain, nonatomic) NSString *bindSerailno;
@property (retain, nonatomic) NSString *bankIcon;
@property (nonatomic) BOOL isGrayCard;
@property (retain, nonatomic) NSString *veriHint;

+ (void)initialize;

@end
