@class NSMutableDictionary, WCMallFunctionActivity, WCMallBroadCastInfo, NSArray, NSDictionary, NSString;

@interface WCMallControlData : NSObject

@property (retain, nonatomic) WCMallBroadCastInfo *m_structBroadCastInfo;
@property (retain, nonatomic) WCMallFunctionActivity *selectedFunctionActivity;
@property (retain, nonatomic) NSMutableDictionary *selectedProductsFilledInfoDic;
@property (retain, nonatomic) NSArray *m_arrGlobalActivityList;
@property (retain, nonatomic) NSArray *m_arrFunctionActivityList;
@property (retain, nonatomic) NSArray *m_arrFunctionProductsList;
@property (retain, nonatomic) NSArray *m_arrOldTelephoneList;
@property (retain, nonatomic) NSArray *bannerDics;
@property (retain, nonatomic) NSDictionary *m_dicAllTelephoneList;
@property (retain, nonatomic) NSDictionary *m_dicCandidateTelephoneList;
@property (nonatomic) BOOL m_bNotShowTutorial;
@property (nonatomic) BOOL m_bFunctionListDataFromLocalCache;
@property (retain, nonatomic) NSString *m_balanceLink;
@property (retain, nonatomic) NSString *m_rechargeLink;
@property (retain, nonatomic) NSString *m_balanceWord;
@property (retain, nonatomic) NSString *m_rechargeWord;
@property (retain, nonatomic) NSDictionary *m_structEmptyPhoneChargeList;
@property (retain, nonatomic) NSDictionary *m_structHasPhoneChargeList;
@property (retain, nonatomic) NSDictionary *m_functionTypeMap;
@property (nonatomic) BOOL m_bIsShowSetting;

- (void).cxx_destruct;

@end
