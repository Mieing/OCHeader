@class NSString;

@interface BalanceMobileInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *mobileFlag;
@property (retain, nonatomic) NSString *mobileNo;
@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *bindSerial;
@property (retain, nonatomic) NSString *bankName;
@property (retain, nonatomic) NSString *bankaccType;
@property (retain, nonatomic) NSString *bindTail;
@property (retain, nonatomic) NSString *bankaccTypeName;

+ (void)initialize;

- (BOOL)isWechatPhone;

@end
