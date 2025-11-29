@interface AWEDraftToPublishViewModelTranslator : NSObject

+ (void)useNLEURSProgressiveRenderWithPublishViewModel:(id)a0 completion:(id /* block */)a1;
+ (void)retrievePublishModuleFromDraft:(id)a0 isEdit:(BOOL)a1 skipLoadVideo:(BOOL)a2 completion:(id /* block */)a3;
+ (void)retrievePublishModuleFromDraft:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)trackCommonParamsFromDraft:(id)a0 context:(id)a1 publishViewModel:(id)a2;
+ (void)p_retrievePublishModuleFromDraft:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (void)p_logDraftLoadStageBeginWithRetrieveFlag:(id)a0 stage:(id)a1;
+ (id)_loadPublishViewModelFromDraft:(id)a0 context:(id)a1;
+ (void)p_logDraftLoadStage:(id)a0 isSuccess:(BOOL)a1 logString:(id)a2;
+ (void)p_trackErrorWithDraftId:(id)a0 action:(id)a1 error:(id)a2;
+ (void)p_asyncRecoverResourceForDraft:(id)a0 publishViewModel:(id)a1;
+ (void)p_trackLoadSucceedWithDraftId:(id)a0;
+ (void)p_loadNLEIfNeededWithdraftId:(id)a0 publishViewModel:(id)a1 context:(id)a2 completion:(id /* block */)a3;
+ (void)p_restorePublishViewModel:(id)a0 draftID:(id)a1 completion:(id /* block */)a2;
+ (void)p_redownloadMusicIfNeededWithDraft:(id)a0 publishViewModel:(id)a1 context:(id)a2 completion:(id /* block */)a3;
+ (void)_loadVideoDataFromFile:(id)a0 retry:(long long)a1 completion:(id /* block */)a2;
+ (id)recoverQueue;
+ (void)p_handleUserEditMusicForAdvanceEditDraft:(id)a0 publishModel:(id)a1 nleEditor:(id)a2 context:(id)a3 completion:(id /* block */)a4;
+ (void)p_recoverNLEResourceWithNLEModel:(id)a0 completion:(id /* block */)a1;
+ (void)retrievePublishModuleFromDraft:(id)a0 isEdit:(BOOL)a1 completion:(id /* block */)a2;
+ (void)retrievePublishModelFromDraftId:(id)a0 isEdit:(BOOL)a1 skipLoadVideo:(BOOL)a2 completion:(id /* block */)a3;

@end
