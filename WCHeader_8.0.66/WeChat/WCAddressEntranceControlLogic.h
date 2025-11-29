@class NSString, WCAddressControlData;
@protocol WCAddressEntranceControlLogicDelegate;

@interface WCAddressEntranceControlLogic : WCBizControlLogic <WCAddressLogicMgrExt, WCAddressListViewControllerDelegate, WCAddressInfoViewControllerDelegate> {
    WCAddressControlData *m_data;
}

@property (weak, nonatomic) id<WCAddressEntranceControlLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAddressEnrtanceControlLogicDelegate:(id)a0;
- (id)initWithData:(id)a0;
- (void)startLoading;
- (void)stopLoading;
- (void)resume;
- (void)pause;
- (void)stopLogic;
- (void)startLogic;
- (void)AddressInfoCancel;
- (void)AddressInfoNext:(id)a0;
- (void)AddressInfoAnalysic:(id)a0;
- (void)AddressListBack;
- (void)AddressListComplete:(id)a0;
- (void)AddressListAdd;
- (void)AddressListEdit:(id)a0;
- (void)AddressListDelete:(id)a0;
- (id)getListHeaderTitle;
- (void)AddressImport;
- (BOOL)onError:(id)a0;
- (void)OnGetAllAddress:(id)a0 UserName:(id)a1 NickName:(id)a2 Error:(id)a3;
- (void)OnGetGetAllAddressStageData:(id)a0 Error:(id)a1;
- (void)OnGetAllFourthAddressStageData:(id)a0 Error:(id)a1;
- (void)OnAddAddress:(id)a0 Error:(id)a1;
- (void)OnDelAddress:(id)a0 Error:(id)a1;
- (void)OnModifyAddress:(id)a0 Error:(id)a1;
- (void)OnSetRecentlyUsedAddress:(id)a0 Error:(id)a1;
- (void)OnImportYiXunAddress:(id)a0 importStatus:(int)a1 Error:(id)a2;
- (void)OnAnalyseAddressInfo:(id)a0;
- (void).cxx_destruct;

@end
