@class WCPayTransferAmountReInputPageStruct, NSString, MsgCheckInfo, WCPayAlertItem;

@interface WCPayTransferPrepayResponseStruct : NSObject

@property (retain, nonatomic) NSString *m_nsReqKey;
@property (nonatomic) unsigned int m_uiHasUnarriveMoney;
@property (nonatomic) long long m_lExtMoney;
@property (retain, nonatomic) NSString *m_nsInterruptDesc;
@property (retain, nonatomic) NSString *m_nsMsgContent;
@property (nonatomic) unsigned int m_uiChargeFee;
@property (nonatomic) unsigned int m_uiAccFee;
@property (nonatomic) unsigned int m_uiFeeLimit;
@property (nonatomic) unsigned int m_uiRemainFee;
@property (nonatomic) unsigned int m_uiExceedFee;
@property (retain, nonatomic) NSString *m_nsChargeRate;
@property (retain, nonatomic) NSString *m_nsTransferInterruptChargeDesc;
@property (nonatomic) unsigned int m_uiUsedFee;
@property (nonatomic) BOOL m_isShowCharge;
@property (retain, nonatomic) NSString *m_nsReceiverTrueName;
@property (retain, nonatomic) WCPayAlertItem *alertItem;
@property (retain, nonatomic) NSString *f2fId;
@property (retain, nonatomic) NSString *transId;
@property (retain, nonatomic) NSString *extendStr;
@property (retain, nonatomic) NSString *receiverOpenId;
@property (nonatomic) unsigned int amount;
@property (retain, nonatomic) NSString *doubleCheckWording;
@property (nonatomic) unsigned int fee;
@property (retain, nonatomic) NSString *transferId;
@property (retain, nonatomic) NSString *transactionId;
@property (retain, nonatomic) NSString *transferReceiverOpenId;
@property (nonatomic) unsigned int scanScene;
@property (retain, nonatomic) NSString *placeorderSucSign;
@property (retain, nonatomic) NSString *paySucExtend;
@property (nonatomic) unsigned int get_dynamic_code_flag;
@property (retain, nonatomic) NSString *get_dynamic_code_sign;
@property (retain, nonatomic) NSString *get_dynamic_code_extend;
@property (retain, nonatomic) NSString *show_paying_wording;
@property (retain, nonatomic) NSString *dynamic_code_spam_wording;
@property (nonatomic) BOOL isNeedCheckName;
@property (retain, nonatomic) NSString *checkNameMessageTitle;
@property (retain, nonatomic) NSString *checkNameMessageWording;
@property (retain, nonatomic) NSString *checkNameMessageDisplayName;
@property (retain, nonatomic) NSString *checkNameMessageCheckNameSign;
@property (nonatomic) unsigned long long checkNameMessageErrortype;
@property (nonatomic) unsigned int return_to_session;
@property (retain, nonatomic) NSString *zaituMsgWording;
@property (retain, nonatomic) NSString *zaituMsgBtnTitle;
@property (retain, nonatomic) NSString *zaituMsgOpenUrl;
@property (retain, nonatomic) MsgCheckInfo *msgCheckInfo;
@property (retain, nonatomic) WCPayTransferAmountReInputPageStruct *amountReinputPage;
@property (retain, nonatomic) NSString *placeorderAttach;

- (void).cxx_destruct;

@end
