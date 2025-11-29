@class NSString, NSArray;

@interface WCPayCreditCardInfo : NSObject {
    NSString *m_nsHelpUrl;
}

@property (retain, nonatomic) NSString *m_nsCreditState;
@property (nonatomic) unsigned int m_uiCreditUsed;
@property (nonatomic) unsigned int m_uiCreditAmount;
@property (retain, nonatomic) NSString *m_nsCreditDegree;
@property (nonatomic) long long m_uiBillAmount;
@property (retain, nonatomic) NSString *m_nsBillTime;
@property (nonatomic) long long m_uiRepayAmount;
@property (nonatomic) long long m_uiRepayMininum;
@property (retain, nonatomic) NSString *m_nsRepayLastTime;
@property (retain, nonatomic) NSString *m_nsLastUpdateTime;
@property (nonatomic) BOOL m_bUpgradeAmount;
@property (nonatomic) unsigned int m_uiUpgradeCount;
@property (retain, nonatomic) NSString *m_nsBillUrl;
@property (retain, nonatomic) NSString *m_nsRepayUrl;
@property (retain, nonatomic) NSString *m_nsLearnMoreUrl;
@property (retain, nonatomic) NSString *m_nsRightsUrl;
@property (retain, nonatomic) NSString *m_nsCreditDetailUrl;
@property (retain, nonatomic) NSString *m_nsAppUserName;
@property (retain, nonatomic) NSString *m_nsAppNickName;
@property (retain, nonatomic) NSString *m_nsAppTelephone;
@property (retain, nonatomic) NSArray *m_aryCreditLimitExtList;
@property (retain, nonatomic) NSString *m_nsExtGroupTitle;
@property (retain, nonatomic) NSArray *m_aryExtList;

- (void).cxx_destruct;

@end
