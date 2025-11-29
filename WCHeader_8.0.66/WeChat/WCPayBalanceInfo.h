@class PromptInfo, NSString, WCPayBalanceMenuInfo, NSDate, WCPayLqpEntranceInfo;

@interface WCPayBalanceInfo : NSObject <NSCoding>

@property (nonatomic) unsigned long long m_uiTotalBalance;
@property (nonatomic) unsigned long long m_uiAvailableBalance;
@property (nonatomic) unsigned long long m_uiFrozenBalance;
@property (nonatomic) unsigned long long m_uiFetchBalance;
@property (retain, nonatomic) NSDate *m_ndFetchArriveTime;
@property (retain, nonatomic) NSString *m_nsBankType;
@property (retain, nonatomic) NSString *m_nsBindSerial;
@property (retain, nonatomic) NSString *m_nsForbidWord;
@property (retain, nonatomic) NSString *m_nsBalanceTelPhone;
@property (retain, nonatomic) NSString *m_nsBalanceListUrl;
@property (nonatomic) BOOL m_bSupportOfflinePay;
@property (retain, nonatomic) NSString *m_nsAvailFetchWording;
@property (retain, nonatomic) NSString *m_nsMaxFetchWording;
@property (nonatomic) unsigned long long m_uiBalanceVersion;
@property (nonatomic) unsigned long long m_uiBalanceExpiredDate;
@property (retain, nonatomic) NSString *m_nsFetchArriveTimeWording;
@property (retain, nonatomic) NSString *m_forbid_title;
@property (retain, nonatomic) NSString *m_forbid_url;
@property (retain, nonatomic) NSString *m_balanceShowWording;
@property (retain, nonatomic) WCPayBalanceMenuInfo *balance_menu_info;
@property (retain, nonatomic) NSString *m_balanceLogoUrl;
@property (nonatomic) unsigned long long wallet_balance;
@property (nonatomic) unsigned long long wallet_entrance_balance_switch_state;
@property (retain) WCPayLqpEntranceInfo *lqp_entrance_info;
@property (retain, nonatomic) PromptInfo *promptInfo;
@property (nonatomic) int default_card_state;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
