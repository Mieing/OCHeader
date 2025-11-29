@class NSString, NSMutableArray;

@interface ApplePayMerchantInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *applePayMerchantId;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSMutableArray *supportedNetworks;
@property (retain, nonatomic) NSMutableArray *merchantCapabilities;
@property (retain, nonatomic) NSMutableArray *paymentSummaryItems;
@property (retain, nonatomic) NSString *appliactionData;
@property (retain, nonatomic) NSMutableArray *supportedCountries;
@property (nonatomic) int applePayLaterAvailability;
@property (nonatomic) BOOL supportsCouponCode;
@property (retain, nonatomic) NSString *couponCode;

+ (void)initialize;

@end
