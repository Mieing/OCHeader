@class NSArray, NSString, NSDictionary, WCPayControlData;

@interface WCMallMobileChargeControlLogic : WCMallControlLogic <WCMallChargeMobileViewControllerDelegate, IWCPayControlLogicExt> {
    WCPayControlData *m_oPayData;
    NSDictionary *dicPayedInfo;
    BOOL bHasTwoCGIRequestInStartLogic;
    BOOL bHasOneCGIHasResponsed;
}

@property (nonatomic) BOOL bIsAddressBookLoading;
@property (nonatomic) BOOL bHasLoadAddressBook;
@property (retain, nonatomic) NSArray *svrRetChangeHistory;
@property (nonatomic) BOOL m_bNeedFirstGotoWCMallProductView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithData:(id)a0;
- (void)SetPayData:(id)a0;
- (void)startLogic;
- (void)stopLogic;
- (void)OnWCMallChargeMobileViewControllerBack;
- (void)OnWCMallChargeMobileViewControllerRightActionBack;
- (void)OnWCMallInputedCompleteTelphone:(id)a0;
- (void)OnWCMallChargeMobileViewControllerSelectedProduct:(id)a0;
- (BOOL)IsUsedWCMallMallProduct;
- (id)GetWCMallMallProductsFiltedOldList:(id)a0;
- (void)OnWCMallChargePhoneClearOldList;
- (void)OnWCMallChargePhoneTelephoneInputComplete:(id)a0;
- (BOOL)IsNeedShowChargeEnsureAlertView;
- (void)OnGetWCMallFunctionList:(id)a0 GlobalList:(id)a1 BroadCastInfo:(id)a2 BannerList:(id)a3 response:(id)a4 FromCached:(BOOL)a5 NotShowTutorial:(BOOL)a6 typeMap:(id)a7 Error:(id)a8;
- (void)OnGetWCMallPayFunctionListRequest:(id)a0 Error:(id)a1;
- (void)OnGetWCMallPayDeleteChargeHistoryResponse:(id)a0 Error:(id)a1;
- (void)handleSvrRetNumberList:(id)a0;
- (id)getAddressbookRemarkWithPhoneNum:(id)a0;
- (void)checkSuccessStopCurrentLogicWithPhone:(id)a0 remark:(id)a1;
- (id)genTargetUrlFromOriginUrl:(id)a0 withPhone:(id)a1 remark:(id)a2 transid:(id)a3 reqkey:(id)a4;
- (void)OnFinishedWCPayLogic:(id)a0 CompleteStatus:(int)a1;
- (void)loadAddressBookData;
- (void)requestAccessForContactsDone:(BOOL)a0;
- (void)tryLoadAddressBook;
- (void)checkHistoryData;
- (void)setTelphoneOwnerName:(id)a0 telString:(id)a1;
- (void).cxx_destruct;

@end
