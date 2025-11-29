@class UINavigationController, WXSceneInternalMessage, MMUIViewController, OpenApiImageCdnUploader, NSString, OpenApiParameter, WXMediaInternalMessage;

@interface SendAppMsgToStateHandler : NSObject <WCShareAuthViewControllerDelegate, TextStatePublishViewControllerDelegate, ShareConfirmViewDelegate> {
    OpenApiParameter *_parameter;
}

@property (retain, nonatomic) UINavigationController *m_navigationController;
@property (retain, nonatomic) OpenApiImageCdnUploader *uploader;
@property (retain, nonatomic) WXMediaInternalMessage *mediaMessage;
@property (retain, nonatomic) WXSceneInternalMessage *sceneInfo;
@property (weak, nonatomic) MMUIViewController *statePublishVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendAppMsgToState:(id)a0;
- (void)doAppAuth;
- (void)clearAuthHandle;
- (void)clearAllHandle;
- (void)clearAllHandleAndReturn3rdApp;
- (void)shareAuthViewControllerDidCancel:(id)a0;
- (void)shareAuthViewControllerDidFail:(id)a0;
- (void)shareAuthViewControllerDidSuccess:(id)a0 redirectUrl:(id)a1 extraInfo:(id)a2;
- (void)showUnsupportErrVC;
- (id)generateSourceInfo;
- (void)generateJumpDataItem:(id /* block */)a0;
- (void)showStateVC:(id)a0;
- (void)pullStateForText;
- (void)pullStateForImage;
- (void)pullStateForMusicVideo;
- (void)publishVideoFileState;
- (void)showStateVCWithSourceInfo:(id)a0 dataItem:(id)a1 sourceName:(id)a2;
- (BOOL)isNeedAppendUpgradeH5WithDataItem:(id)a0;
- (void)launchAppAndSendRespWithErrCode:(int)a0;
- (void)launchAppAndSendRespWithErrCode:(int)a0 errMsg:(id)a1;
- (void)onTextStatePublished;
- (void)onTextStatePublishCancelled;
- (void).cxx_destruct;

@end
