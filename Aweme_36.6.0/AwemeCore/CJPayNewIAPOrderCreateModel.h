@class NSString, CJPayNewIAPTransactionInfoModel;

@interface CJPayNewIAPOrderCreateModel : CJPayNewIAPBaseResponseModel

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *outTradeNo;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *tradeAmount;
@property (copy, nonatomic) NSString *uidEncrypt;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) long long iapType;
@property (retain, nonatomic) CJPayNewIAPTransactionInfoModel *transactionModel;
@property (nonatomic) long long offerType;

- (id)toCJIAPProductModel;
- (BOOL)applicationUsernameUseEncryptUid;
- (id)fullOrderID;
- (id)customApplicationUsername;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWith:(id)a0;

@end
