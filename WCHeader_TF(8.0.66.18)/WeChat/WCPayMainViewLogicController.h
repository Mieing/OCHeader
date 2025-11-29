@class WCPayJumpRemindControlLogic, WCPayGetGDPRInfoCgi, NSString, GetAllFunctionResponse, LocationRetriever, WCPayWalletGetAllFunctionCgi, WCPayControlData;
@protocol WCPayMainViewLogicControllerDelegate;

@interface WCPayMainViewLogicController : NSObject <IWCPayControlLogicExt, WCPayOpenECardControlLogicExt, WCPayWalletGetAllFunctionCgiDelegate, LocationRetrieveDelegate, WCPayGetGDPRInfoCgiDelegate, KindaPageExt>

@property (retain, nonatomic) WCPayControlData *data;
@property (weak, nonatomic) id<WCPayMainViewLogicControllerDelegate> delegate;
@property (retain, nonatomic) WCPayWalletGetAllFunctionCgi *getAllFunctionCgi;
@property (retain, nonatomic) GetAllFunctionResponse *walletFunctionResp;
@property (retain, nonatomic) LocationRetriever *locationRetriver;
@property (retain, nonatomic) WCPayJumpRemindControlLogic *jumpRemindControlLogic;
@property (retain, nonatomic) WCPayGetGDPRInfoCgi *getGDPRinfoCgi;
@property (nonatomic) unsigned int paycardListLogicTag;
@property (nonatomic) BOOL bHasGetPayCardList;
@property (nonatomic) BOOL bNeedUpdateOnAppear;
@property (nonatomic) BOOL bHasSubTitleCell;
@property (nonatomic) BOOL bHasPreloadWeAppEnv;
@property (nonatomic) BOOL bHasPrefetchWeApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)setupData;
- (void)getViewDataFromSvr;
- (void)getWalletFounctionDataFromSvr;
- (void)setupReportData;
- (void)checkLocationAndWifiData;
- (void)refreshWithData:(id)a0;
- (id)getControlData;
- (void)refreshViewDataWhenPopOrDismiss;
- (void)setNeedUpdateOnAppear;
- (BOOL)checkIfNeedUpdateOnAppear;
- (id)getEnterManageSettingWording;
- (id)getAllFunctionDetailData;
- (id)getLastActivityItemIndexPath;
- (BOOL)useSmallBottomMarginInSection;
- (long long)dataSectionCount;
- (id)dataGroupInfoWithSection:(long long)a0;
- (long long)dataRowCountWithSectionIndex:(long long)a0;
- (id)dataItemWithIndexPath:(id)a0;
- (id)dataHeaderWithSectionIndex:(long long)a0;
- (void)handleCollectionViewDidSelectWithIndexPath:(id)a0;
- (void)OnKindaWebViewClose;
- (void)onKindaWebViewPassParams:(id)a0 returnParams:(id)a1;
- (void)OnPayCardListChanged:(id)a0;
- (void)onContinuePayCardListChanged:(id)a0;
- (void)OnGetLocalCachePayCardList:(id)a0;
- (void)openECardLogicDidSuccess:(id)a0;
- (void)onGetWalletAllFunctionCgiResp:(id)a0;
- (void)checkAndPreloadMiniApp;
- (void)checkAndPrefetchMiniApp;
- (void)calcHasSubTitleCell;
- (void)OnWCPayGetGDPRInfoCgiResponseOK:(id)a0;
- (void)OnWCPayGetGDPRInfoCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (void)stopPayCardListLogic;
- (void).cxx_destruct;

@end
