@class NSString;

@interface CJPayNewIAPTransactionInfoModel : NSObject

@property (copy, nonatomic) NSString *receipt;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *transactionID;
@property (copy, nonatomic) NSString *originalTransactionID;
@property (copy, nonatomic) NSString *transactionDate;
@property (copy, nonatomic) NSString *originalTransactionDate;

- (void).cxx_destruct;

@end
