@class NSString, NSDictionary;

@interface CJIAPProduct : JSONModel

@property (nonatomic) long long createTime;
@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *receipt;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *transactionID;
@property (copy, nonatomic) NSString *originalTransactionID;
@property (copy, nonatomic) NSDictionary *otherVerifyParams;
@property (nonatomic) BOOL verifyInForeground;
@property (copy, nonatomic) NSString *transactionDate;
@property (copy, nonatomic) NSString *originalTransactionDate;
@property (copy, nonatomic) NSString *outOrderNo;
@property (copy, nonatomic) NSString *originalOrderID;
@property (nonatomic) BOOL isFromRefreshReceipt;
@property (copy, nonatomic) NSString *currentTransactionState;
@property (nonatomic) long long iapType;
@property (copy, nonatomic) NSString *merchantId;
@property (nonatomic) long long offerType;
@property (nonatomic) BOOL isRetainShown;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (BOOL)propertyIsIgnored:(id)a0;

- (BOOL)receiptIsValid;
- (BOOL)isRestoreProduct;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
