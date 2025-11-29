@class NSString, CContact, WCPayGppfQueryInfoCgi;
@protocol WCPayGppfLaunchControlLogicDelegate;

@interface WCPayGPpfLaunchControlLogic : WCPayControlLogic <WCPayGppfQueryInfoCgiDelegate, WCPayGPLaunchControlLogicDelegate>

@property (weak, nonatomic) id<WCPayGppfLaunchControlLogicDelegate> launchDelegate;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *pfOrderNo;
@property (nonatomic) unsigned long long pfFromScene;
@property (nonatomic) BOOL bIsLaunchSucc;
@property (retain, nonatomic) CContact *launchContact;
@property (retain, nonatomic) WCPayGppfQueryInfoCgi *queryPfInfoCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWith3rdAppId:(id)a0 pfOrderNo:(id)a1 pfFromScene:(unsigned long long)a2;
- (void)setPfLaunchLogicDelegate:(id)a0;
- (void)dealloc;
- (void)stopLogic;
- (void)startLogic;
- (void)sendQueryPfInfoRequest;
- (void)onGetpfQueryInfoCgiResp:(id)a0;
- (void)saveAndRefreshSvrConfigData;
- (void)onLaunchGroupPaySuccWithContact:(id)a0;
- (void)onLaunchControlLogicStop;
- (void).cxx_destruct;

@end
