@class NSString, AuthenApplePayInfo_PaymentMethod;

@interface AuthenApplePayInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *applePayTransactionId;
@property (retain, nonatomic) NSString *applePayPaymentData;
@property (retain, nonatomic) AuthenApplePayInfo_PaymentMethod *applePayPaymentMethod;

+ (void)initialize;

@end
