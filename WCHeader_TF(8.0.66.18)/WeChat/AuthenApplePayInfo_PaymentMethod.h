@class NSString;

@interface AuthenApplePayInfo_PaymentMethod : WXPBGeneratedMessage

@property (nonatomic) int methodType;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *network;

+ (void)initialize;

@end
