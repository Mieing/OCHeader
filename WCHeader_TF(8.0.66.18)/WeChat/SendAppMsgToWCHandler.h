@class UINavigationController, NSString, MMTipsViewController, OpenApiParameter, AppCommunicateData;

@interface SendAppMsgToWCHandler : MMObject <WCShareAuthViewControllerDelegate, MMTipsViewControllerDelegate, PBMessageObserverDelegate, WCCommitViewResultDelegate> {
    OpenApiParameter *_parameter;
    UINavigationController *m_confirmViewController;
    MMTipsViewController *_tipsViewController;
}

@property (retain, nonatomic) UINavigationController *m_navigationController;
@property (nonatomic) BOOL canReturnRightShareResult;
@property (readonly, nonatomic) NSString *appId;
@property (readonly, nonatomic) AppCommunicateData *appData;
@property (nonatomic) BOOL isCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)asyncGenUploadTaskWithLocalIdentifier:(id)a0 withAppID:(id)a1 extraInfo:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleFormUploadTaskError:(id)a0 completionHandler:(id /* block */)a1;
- (void)showAlertWithMessage:(id)a0 handle:(id /* block */)a1;
- (long long)currentAuthorizationStatus;
- (id)init;
- (void)dealloc;
- (void)sendAppMsgToWC:(id)a0;
- (void)cancelSendAppMsgToWC;
- (BOOL)shouldStayInWechat;
- (void)cancelAllHandle;
- (void)clearAllHandle;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandleAndReturn3rdApp:(int)a0;
- (void)launchAppAndSendRespWithErrCode:(int)a0 errStr:(id)a1;
- (id)sendTimeLineTextWithComunicateData:(id)a0;
- (id)sendTimeLinePhotoWithComunicateData:(id)a0;
- (id)sendTimeLineMusicWithComunicateData:(id)a0 shareType:(long long)a1;
- (id)sendTimeLineVideoWithComunicateData:(id)a0;
- (id)getTmpFilePathWithMP4Ext;
- (id)saveAndCheckVideoWithComunicateData:(id)a0 pickerScene:(unsigned long long)a1 extraInfo:(id)a2;
- (id)saveVideoData:(id)a0;
- (BOOL)checkVideoDataWithPath:(id)a0 pickerScene:(unsigned long long)a1 extraInfo:(id)a2;
- (id)sendTimeLineVideoFileWithComunicateData:(id)a0 withAppID:(id)a1 extraInfo:(id)a2;
- (id)genUploadTaskWithVideoPath:(id)a0 comunicateData:(id)a1 withAppID:(id)a2 extraInfo:(id)a3;
- (id)sendTimeLineWeAppWithComunicateData:(id)a0;
- (id)sendTimeLineFeedWithComunicateData:(id)a0;
- (id)sendTimeLineGameShareCardWithComunicateData:(id)a0 withAppID:(id)a1 extraInfo:(id)a2;
- (void)showConfirmView;
- (void)closeConfirmView;
- (void)sendTimeLineWithComunicateData:(id)a0 withAppID:(id)a1 extraInfo:(id)a2;
- (void)handleUploadTask:(id)a0 mediaMessage:(id)a1;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)showAlertView;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)doAppAuth;
- (void)shareAuthViewControllerDidCancel:(id)a0;
- (void)shareAuthViewControllerDidRedirect:(id)a0;
- (void)shareAuthViewControllerDidSuccess:(id)a0 redirectUrl:(id)a1 extraInfo:(id)a2;
- (void)shareAuthViewControllerDidFail:(id)a0;
- (void)removeAuthViewController;
- (void)reportShareResult:(int)a0;
- (void)handleGetGameShareDataFail;
- (void)getGameShareInfo:(id)a0 appId:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
