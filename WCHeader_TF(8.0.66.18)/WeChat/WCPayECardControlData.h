@class NSString, NSArray, JSEvent, OpenECardRes, BindECardRes, QryBankList4BindRes, BankInfoItem, WCPayBindCardInfo;

@interface WCPayECardControlData : NSObject

@property (retain, nonatomic) JSEvent *jsEvent;
@property (copy, nonatomic) NSString *reqSerial;
@property (copy, nonatomic) NSString *payPassword;
@property (nonatomic) int openScene;
@property (copy, nonatomic) NSString *ecardType;
@property (copy, nonatomic) NSString *filledCardNumber;
@property (copy, nonatomic) NSString *filledPhoneNumber;
@property (retain, nonatomic) NSString *filledBankType;
@property (retain, nonatomic) BankInfoItem *selectedCardInfo;
@property (retain, nonatomic) NSArray *bankArray;
@property (retain, nonatomic) QryBankList4BindRes *bankListResponse;
@property (retain, nonatomic) OpenECardRes *openECardResponse;
@property (retain, nonatomic) BindECardRes *bindECardResponse;
@property (retain, nonatomic) WCPayBindCardInfo *ECardInfo;

- (void).cxx_destruct;

@end
