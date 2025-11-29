@class OnClickPurchaseRes, RedeemFundRes, QryUsrFundDetailRes, OnClickRedeemRes, QrySettingResp, QryPurchaseResultRes, NSString;

@interface WCPayLQTControlData : NSObject

@property (nonatomic) unsigned long long lqtMoneyScene;
@property (nonatomic) unsigned int lqtCurrentTransMoney;
@property (retain, nonatomic) QryUsrFundDetailRes *userDetailFundResp;
@property (retain, nonatomic) QryPurchaseResultRes *qrypurchaseResultResp;
@property (retain, nonatomic) OnClickRedeemRes *clickRedeemResp;
@property (retain, nonatomic) OnClickPurchaseRes *clickPurchaseResp;
@property (retain, nonatomic) RedeemFundRes *redeemFundResp;
@property (retain, nonatomic) QrySettingResp *chargeSettingResp;
@property (retain, nonatomic) NSString *ecardtype;
@property (retain, nonatomic) NSString *extraData;
@property (nonatomic) long long needOpenLqb;
@property (nonatomic) BOOL autoJumpChargeSettingVC;
@property (nonatomic) BOOL showOpenSuccToast;
@property (retain, nonatomic) NSString *outerPurchaseBindSerial;
@property (retain, nonatomic) NSString *outerTransMoney;
@property (nonatomic) unsigned int outerEntranceType;
@property (nonatomic) BOOL showKeyboard;
@property (nonatomic) BOOL checkPurchaseFromLqGuide;

- (id)getCurrentAccountTypeName;
- (void).cxx_destruct;

@end
