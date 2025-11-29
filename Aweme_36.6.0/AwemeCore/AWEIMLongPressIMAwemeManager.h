@class AWEIMLongPressContext, AWEIMMessage, AWELongPressPanelConfiguration, DUXLoadingParticleView, AWEIMImageEditService;
@protocol AWEIMAwemeMediaDownloaderProtocol, AWEIMAwemeMediaImageDownloader;

@interface AWEIMLongPressIMAwemeManager : NSObject

@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) AWEIMLongPressContext *context;
@property (retain, nonatomic) id<AWEIMAwemeMediaDownloaderProtocol> downloader;
@property (retain, nonatomic) id<AWEIMAwemeMediaImageDownloader> imageLoader;
@property (retain, nonatomic) AWEIMImageEditService *editService;
@property (retain, nonatomic) AWELongPressPanelConfiguration *lppConfig;

- (id)filterTranspondIMShareModelListIfNeeded:(id)a0;
- (void)configFunctionModelsAfterDialogShow:(id)a0;
- (void)handleIMLongPressWithAwemeModel:(id)a0 message:(id)a1 context:(id)a2 showCompletion:(id /* block */)a3 triggerBlock:(id /* block */)a4 dismissBlock:(id /* block */)a5;
- (void)handleIMLongPressWithAwemeModel:(id)a0 message:(id)a1 sceneType:(long long)a2 showCompletion:(id /* block */)a3 triggerBlock:(id /* block */)a4 dismissBlock:(id /* block */)a5;
- (void)p_showNewPressPanelWithAwemeModel:(id)a0 message:(id)a1 context:(id)a2 showCompletion:(id /* block */)a3 triggerBlock:(id /* block */)a4 dismissBlock:(id /* block */)a5 scene:(id)a6;
- (id /* block */)friendListBlockV2WithModel:(id)a0 message:(id)a1 config:(id)a2 showCompletion:(id /* block */)a3;
- (id)getDownloaderWithAwemeModel:(id)a0 message:(id)a1 context:(id)a2;
- (id)p_getEnterFromParamString;
- (void)onMessagePositioningWithMessage:(id)a0;
- (void)p_addFriendsListV2With:(id)a0 inModels:(id)a1 awemeModel:(id)a2 message:(id)a3;
- (void)p_onPressShareModel:(id)a0 awemeModel:(id)a1 message:(id)a2;
- (BOOL)p_checkUserSendMessagePrivilegeWithShareModel:(id)a0 awemeModel:(id)a1 message:(id)a2;
- (void)handleIMLongPressWithAwemeModel:(id)a0 message:(id)a1 sceneType:(long long)a2 triggerBlock:(id /* block */)a3 dismissBlock:(id /* block */)a4;
- (void).cxx_destruct;

@end
