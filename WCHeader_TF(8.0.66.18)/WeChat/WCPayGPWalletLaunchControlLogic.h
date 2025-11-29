@class AAOperationRes, CContact, NSString, WCPayGPOperationCgi, NSMutableArray, WCPayGPLaunchControlLogic;
@protocol WCPayGPWalletLaunchControlLogicDelegate;

@interface WCPayGPWalletLaunchControlLogic : WCPayControlLogic <SessionSelectControllerDelegate, IWCPayControlLogicExt, WCPayGPIntroViewControllerDelegate, WCPayGPLaunchControlLogicDelegate, WCPayGPOperationCgiDelegate>

@property (weak, nonatomic) id<WCPayGPWalletLaunchControlLogicDelegate> walletLaunchDelegate;
@property (retain, nonatomic) WCPayGPLaunchControlLogic *launchLogic;
@property (nonatomic) BOOL bHasLaunchSucc;
@property (retain, nonatomic) NSMutableArray *recentGroupPayContactList;
@property (retain, nonatomic) CContact *launchContact;
@property (nonatomic) long long groupPayAmount;
@property (retain, nonatomic) NSString *groupPayTitle;
@property (nonatomic) BOOL bIsFromJSAPI;
@property (retain, nonatomic) WCPayGPOperationCgi *gpOperationCgi;
@property (retain, nonatomic) AAOperationRes *gpOperationResp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (id)initWithData:(id)a0 amount:(long long)a1 title:(id)a2;
- (void)setupData;
- (void)setGroupPayWalletLaunchDelegate:(id)a0;
- (void)startLogic;
- (void)stopLogic;
- (void)onWCPayGPIntroViewControllerBack;
- (void)onWCPayGPIntroViewControllerClickLaunchBtn;
- (void)onWCPayGPIntroViewControllerClickRecordHistoryBtn;
- (unsigned long long)getGroupPayLaunchScene;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (id)sectionTitleForBizChatSession;
- (long long)numberOfRowInBizChatSession;
- (id)contactInBizChatSessionAtRow:(unsigned long long)a0;
- (void)contactInBizChatDidSelect:(id)a0;
- (void)onLaunchGroupPaySuccWithContact:(id)a0;
- (void)onLaunchControlLogicStop;
- (id)getOperationData;
- (void)sendGroupPaySvrConfigRequest;
- (void)onGetGroupPayOperationResponse:(id)a0;
- (void).cxx_destruct;

@end
