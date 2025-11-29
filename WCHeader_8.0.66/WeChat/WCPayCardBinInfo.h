@class WCPayBankCardInfo, NSString, NSArray, NSDate;

@interface WCPayCardBinInfo : NSObject <NSCoding, IWCPaySelecBankItem>

@property (retain, nonatomic) NSString *m_cardBankType;
@property (retain, nonatomic) NSString *m_cardBankName;
@property (retain, nonatomic) NSString *m_cardType;
@property (retain, nonatomic) NSString *m_cardTypeName;
@property (retain, nonatomic) NSString *m_cardNumber;
@property (retain, nonatomic) NSString *m_cardLogoUrl;
@property (retain, nonatomic) NSString *m_bankPhone;
@property (retain, nonatomic) NSString *m_nsForbidWord;
@property (retain, nonatomic) NSArray *m_arrSupCredInfo;
@property (nonatomic) BOOL m_isConfidentTrue;
@property (nonatomic) BOOL m_needUsrNameInfo;
@property (nonatomic) BOOL m_needUsrIDInfo;
@property (nonatomic) BOOL m_needValidDate;
@property (nonatomic) BOOL m_needCVVNumber;
@property (nonatomic) BOOL m_needUsrPhoneNumber;
@property (nonatomic) BOOL m_isBankUsable;
@property (retain, nonatomic) NSString *m_usrName;
@property (nonatomic) BOOL m_needPayMoneyAfferBind;
@property (nonatomic) BOOL m_canBindReturnMoney;
@property (retain, nonatomic) NSString *pre_auth_word;
@property (nonatomic) BOOL m_needFirstName;
@property (nonatomic) BOOL m_needLastName;
@property (nonatomic) BOOL m_needCountry;
@property (nonatomic) BOOL m_needArea;
@property (nonatomic) BOOL m_needAddress;
@property (nonatomic) BOOL m_needPhoneNumber;
@property (nonatomic) BOOL m_needEmail;
@property (nonatomic) BOOL m_needZip;
@property (nonatomic) BOOL m_bSupportOfflinePay;
@property (nonatomic) unsigned int m_cardBankTag;
@property (nonatomic) unsigned int m_cardAuthMode;
@property (retain, nonatomic) NSString *m_nsBrandUserName;
@property (retain, nonatomic) NSString *m_nsBrandTips;
@property (retain, nonatomic) NSDate *m_ndFetchArriveTime;
@property (retain, nonatomic) NSString *m_nsFetchArriveTimeWording;
@property (retain, nonatomic) NSString *m_arriveType;
@property (retain, nonatomic) NSString *m_nsAvailableSaveInfo;
@property (nonatomic) BOOL m_needShowProtocol;
@property (nonatomic) BOOL support_foreign_mobile;
@property (retain, nonatomic) NSString *m_nsBankNamePinYin;
@property (retain, nonatomic) NSArray *m_arrCreRule;
@property (retain, nonatomic) WCPayBankCardInfo *m_bankCardInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)bankName;
- (id)bankIconUrl;
- (id)pinYin;
- (id)bankCardType;
- (void).cxx_destruct;

@end
