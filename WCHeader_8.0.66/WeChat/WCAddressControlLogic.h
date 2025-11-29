@class WCAddressAuthenticationSturct, NSString, JSEvent, WCAddressControlData;

@interface WCAddressControlLogic : WCBizControlLogic <WCAddressLogicMgrExt, WCAddressInfoViewControllerDelegate, WCAddressListViewControllerDelegate> {
    JSEvent *m_jsEvent;
    WCAddressControlData *m_data;
    WCAddressAuthenticationSturct *m_oWCAddressAuthenticationStruct;
    NSString *m_nsUserName;
}

@property (nonatomic) unsigned long long entryScene;
@property (nonatomic) BOOL responseWithAddressID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0 AuthenticationStruct:(id)a1 entryScene:(unsigned long long)a2;
- (id)initWithJSEvent:(id)a0 AuthenticationStruct:(id)a1 entryScene:(unsigned long long)a2 isFromManage:(BOOL)a3;
- (id)getLatestAddress;
- (void)startLoading;
- (void)stopLoading;
- (void)resume;
- (void)pause;
- (void)startForceRotationToPortrait;
- (void)stopForceRotationToPortrait;
- (void)stopLogic;
- (void)EndWCAddressControlLogic;
- (void)startLogic;
- (void)setNeedStatusBarInset:(BOOL)a0;
- (void)setIsInSheetMode:(BOOL)a0;
- (void)setForbidDarkmode:(BOOL)a0;
- (void)setNeedDismissToParentVCOnAddAddress:(BOOL)a0;
- (void)setDirectOpenAddAddress:(BOOL)a0;
- (void)setIsInGiftMode:(BOOL)a0;
- (void)setSelectedAddressID:(unsigned int)a0;
- (void)AddressInfoCancel;
- (void)AddressInfoNext:(id)a0;
- (void)AddressInfoAnalysic:(id)a0;
- (void)AddressListBack;
- (void)AddressListComplete:(id)a0;
- (void)AddressListAdd;
- (void)AddressListEdit:(id)a0;
- (void)AddressListDelete:(id)a0;
- (void)AddressImport;
- (BOOL)onError:(id)a0;
- (void)OnGetAllAddress:(id)a0 UserName:(id)a1 NickName:(id)a2 Error:(id)a3;
- (void)OnGetGetAllAddressStageData:(id)a0 Error:(id)a1;
- (void)OnGetAllFourthAddressStageData:(id)a0 Error:(id)a1;
- (void)OnAddAddress:(id)a0 Error:(id)a1;
- (void)OnDelAddress:(id)a0 Error:(id)a1;
- (void)OnModifyAddress:(id)a0 Error:(id)a1;
- (void)OnSetRecentlyUsedAddress:(id)a0 Error:(id)a1;
- (void)OnAnalyseAddressInfo:(id)a0;
- (void)OnImportYiXunAddress:(id)a0 importStatus:(int)a1 Error:(id)a2;
- (void)OnNotAcceptGetLatestAddress;
- (void).cxx_destruct;

@end
