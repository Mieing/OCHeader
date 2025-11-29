@class WCPayLoanEntryInfo, WCPaySwitchInfo, WCPayRealnameGuideInfo, WCPayOfflinePayBlockLayer, WCPayDynamicActionEntry, WCPayBalanceChargeLQTInfo, WCPayUserInfo, WCPayFetchInfo, WCPayNoticeInfo, NSString, WCPayBindCardInfo, WCPayLQTInfo, WCPayBillEntryInfo, WCPayJumpRemindInfo, WCPayOfflinePayDisableBlockLayer, NSArray, WCPayBankPriority, WCPayBalanceInfo, WCPayOfflinePayGuideBar;

@interface WCPayBindQueryUserInfoStruct : NSObject

@property (retain, nonatomic) NSArray *m_arrPayCardList;
@property (retain, nonatomic) NSArray *m_arrHistoryPayCardList;
@property (retain, nonatomic) WCPayUserInfo *m_oUserInfo;
@property (retain, nonatomic) NSArray *m_arrVirtualCardList;
@property (retain, nonatomic) NSArray *m_arrWXBorrowMoneyList;
@property (retain, nonatomic) WCPayBalanceInfo *m_oBalanceInfo;
@property (retain, nonatomic) WCPaySwitchInfo *m_oSwitchInfo;
@property (retain, nonatomic) WCPayNoticeInfo *m_oWCPayNoticeInfo;
@property (retain, nonatomic) NSArray *m_arrBalaneNotice;
@property (retain, nonatomic) NSArray *m_arrFetchNotice;
@property (retain, nonatomic) WCPayLoanEntryInfo *m_oLoanEntryInfo;
@property (retain, nonatomic) WCPayBindCardInfo *m_oSelectedBindCardInfo;
@property (retain, nonatomic) NSString *m_nsNoAvalibleCardWording;
@property (retain, nonatomic) WCPayFetchInfo *m_oFetchInfo;
@property (retain, nonatomic) WCPayRealnameGuideInfo *realnameInfo;
@property (retain, nonatomic) WCPayLQTInfo *m_oLqtInfo;
@property (retain, nonatomic) WCPayBankPriority *bank_priority;
@property (nonatomic) int bindqueryScene;
@property (retain, nonatomic) WCPayBillEntryInfo *billEntryInfo;
@property (retain, nonatomic) WCPayJumpRemindInfo *jumpRemindInfo;
@property (retain, nonatomic) WCPayDynamicActionEntry *lqt_action_entry;
@property (retain, nonatomic) WCPayBalanceChargeLQTInfo *balanceLqtInfo;
@property (retain, nonatomic) WCPayOfflinePayGuideBar *offlinePayGuideBar;
@property (retain, nonatomic) WCPayOfflinePayBlockLayer *offlinePayBlockLayer;
@property (retain, nonatomic) WCPayOfflinePayDisableBlockLayer *offlinePayDisableBlockLayer;
@property (retain, nonatomic) NSArray *payManageLabelList;
@property (retain, nonatomic) NSString *complianceHalfPageData;

- (void).cxx_destruct;

@end
