@class NSString;

@interface WCPayQRCodeCollectionFixedAmountData : NSObject

@property (retain, nonatomic) NSString *QRCodeURL;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) long long amount;
@property (nonatomic) BOOL payerDescRequired;
@property (retain, nonatomic) NSString *payerDescPlaceholder;

- (void)reset;
- (void).cxx_destruct;

@end
