@class GetHoneyPayCardResp, QryHoneyPayCardDetailResp, HoneyPayListResp, GetCreateTokenSignResp, NSString, HoneyPayListResp_HoneyPayRecord, CheckHoneyPayerResp, CheckHoneyUserResp, QryHoneyPayerDetailResp, CreateHoneyPayCardResp, CheckHoneyPayerResp_HPCardTypeInfo, GetMCreditLineTokenSignResp, CContact, QryHoneyUserDetailResp, WCPayBindCardInfo;

@interface WCPayHoneyPayControlData : NSObject

@property (nonatomic) BOOL popWebView;
@property (retain, nonatomic) HoneyPayListResp *honeyPayListResp;
@property (retain, nonatomic) CContact *userContact;
@property (retain, nonatomic) CheckHoneyPayerResp *checkPayerResp;
@property (retain, nonatomic) CheckHoneyPayerResp_HPCardTypeInfo *selectedCardTypeInfo;
@property (retain, nonatomic) CheckHoneyUserResp *checkUserResp;
@property (retain, nonatomic) GetCreateTokenSignResp *getCreateTokenSignResp;
@property (retain, nonatomic) CreateHoneyPayCardResp *createdReponse;
@property (retain, nonatomic) GetMCreditLineTokenSignResp *getMCreditLineTokenSignResp;
@property (nonatomic) unsigned long long maximumAmount;
@property (copy, nonatomic) NSString *wishing;
@property (retain, nonatomic) HoneyPayListResp_HoneyPayRecord *selectedHoneyPayRecord;
@property (retain, nonatomic) QryHoneyPayerDetailResp *payerDetailResp;
@property (retain, nonatomic) QryHoneyUserDetailResp *receiverDetailResp;
@property (retain, nonatomic) GetHoneyPayCardResp *getHoneyPayResp;
@property (retain, nonatomic) QryHoneyPayCardDetailResp *cardDetailResp;
@property (copy, nonatomic) NSString *cellCardNo;
@property (retain, nonatomic) WCPayBindCardInfo *honeyPayCardInfo;

- (void).cxx_destruct;

@end
