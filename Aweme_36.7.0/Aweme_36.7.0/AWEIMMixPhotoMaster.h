@protocol IESIMMessageDataManagerProtocol;

@interface AWEIMMixPhotoMaster : NSObject

@property (retain, nonatomic) id<IESIMMessageDataManagerProtocol> dataManager;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)showToastWithError:(id)a0;
- (id)p_errorWithCode:(int)a0 message:(id)a1;
- (id)createTaskWithContext:(id)a0;
- (id)joinMixPhotoWithContext:(id)a0;
- (id)stopMixPhotoWithContext:(id)a0;
- (id)tryPresentOngoingMixDetailWithContext:(id)a0;
- (id)checkActivityAvailableWithConvID:(id)a0;
- (id)checkRequestActionWithConversation:(id)a0 actionType:(long long)a1;
- (id)tipsForActivityStatusCheckError:(id)a0;
- (id)presentMixPhotoPageSheetWithContext:(id)a0;
- (id)reflowJoinMixPhotoWithContext:(id)a0;
- (id)startMixPhotoWithContext:(id)a0;
- (id)startWithoutConversationWithContext:(id)a0;
- (id)handleReflowActionWithContext:(id)a0;
- (id)forwardLoraMixPhotoWithContext:(id)a0;
- (BOOL)p_shouldShowAlertForResult:(id)a0;
- (BOOL)p_shouldShowToastForResult:(id)a0;
- (id)p_tipsForStatusCheckError:(id)a0;
- (id)p_tipsForResult:(id)a0;
- (BOOL)p_shouldDismissCameraForResult:(id)a0;
- (id)p_currentMessageBaseVC;
- (BOOL)p_functionDisabled;
- (id)sendStartMessageWithContext:(id)a0;
- (void)finishActionBarTaskIfNeed:(id)a0;
- (void)p_sendStartOrJoinSuccessMessageInfo:(id)a0;
- (id)sendReflowJoinMessageWithContext:(id)a0;
- (id)startLoraMixPhotoWithContext:(id)a0;
- (id)createAILoraWithJoinContext:(id)a0;
- (id)createAILoraWithContext:(id)a0;
- (id)joinLoraMixPhotoWithContext:(id)a0;
- (id)reflowJoinLoraMixPhotoWithContext:(id)a0;
- (id)sendForwardLoraMixPhotoMessageWithContext:(id)a0;
- (id)checkRequestActionValidWithConversation:(id)a0 actionType:(long long)a1;
- (void)p_showToastWithContent:(id)a0;
- (void)p_showAlertWithContent:(id)a0 action:(id /* block */)a1;
- (id)p_saveImageToAlbum:(id)a0;
- (void)p_showAlertWithContent:(id)a0;
- (void)p_showAlreadyFullAlertWithContent:(id)a0 okAction:(id /* block */)a1 saveAndRenewAction:(id /* block */)a2;
- (id)p_saveImageToAlbumAndToast:(id)a0;
- (id)p_startMixPhotoCameraSubmitActionWithImage:(id)a0 convType:(unsigned long long)a1 convID:(id)a2 convShortID:(long long)a3 style:(id)a4 maxMember:(int)a5 trackExt:(id)a6;
- (id)p_showCameraWithActionType:(long long)a0 conversation:(id)a1 trackExt:(id)a2 resultResolverMaker:(id /* block */)a3;
- (id)p_safeCallResultMessageIfNecessary:(id)a0;
- (id)p_startMixPhotoWithContext:(id)a0;
- (id)p_prepareStartContext:(id)a0;
- (id)p_nextShowContactPickerWithContext:(id)a0;
- (id)p_nextStartMixPhotoOnConversation:(id)a0 context:(id)a1;
- (id)outShareActivityInfoWithContext:(id)a0 idempotentId:(id)a1;
- (id)p_requestStartMixPhotoWithContext:(id)a0;
- (id)p_submitActionWithImage:(id)a0 trackExt:(id)a1;
- (id)p_stopMixPhotoCameraSubmitActionWithConvType:(unsigned long long)a0 convID:(id)a1 convShortID:(long long)a2 playID:(long long)a3 trackExt:(id)a4;
- (id)p_joinMixPhotoWithContext:(id)a0;
- (id)p_joinMixPhotoCameraSubmitActionWithImage:(id)a0 convType:(unsigned long long)a1 convID:(id)a2 convShortID:(long long)a3 playID:(long long)a4 serverMessageID:(long long)a5 trackExt:(id)a6 actionType:(long long)a7;
- (id)p_uploadImage:(id)a0 withTracker:(id)a1;
- (id)p_photoInfoForUploadResult:(id)a0;
- (id)p_loadMessageWithServerMessageID:(long long)a0 conversation:(id)a1;
- (id)p_tryPresentOngoingMixDetailWithConv:(id)a0 mixImageMessage:(id)a1 enableMediaBrowser:(BOOL)a2 trackExtra:(id)a3 remindBlock:(id /* block */)a4;
- (id)presentLaunchPageSheetWithConversation:(id)a0 trackExtra:(id)a1;
- (id)p_actionForRequestResult:(id)a0 image:(id)a1 onTermination:(id /* block */)a2;
- (id)p_requestStartMixPhotoWithConvType:(unsigned long long)a0 convID:(id)a1 convShortID:(long long)a2 style:(id)a3 maxMember:(int)a4 myPhotoInfo:(id)a5 trackExt:(id)a6 tracker:(id)a7;
- (id)p_requestStopMixPhotoWithConvType:(unsigned long long)a0 convID:(id)a1 convShortID:(long long)a2 playID:(long long)a3 trackExt:(id)a4;
- (id)p_requestJoinMixPhotoWithConvType:(unsigned long long)a0 convID:(id)a1 convShortID:(long long)a2 playID:(long long)a3 myPhotoInfo:(id)a4 trackExt:(id)a5 tracker:(id)a6 actionType:(long long)a7;
- (id)p_presentOngoingMixDetailWithConv:(id)a0 mixImageMessage:(id)a1 trackExtra:(id)a2;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
