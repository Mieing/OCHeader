@interface AWEOpenShareProcessManager : NSObject

+ (void)startShareWithResp:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (BOOL)checkDouyinVersionValidToMiniVersion:(id)a0;
+ (void)handleCheckPermissionResultToResp:(id)a0 ToDict:(id)a1 withCheckResult:(id)a2;
+ (void)updateOpenPlatformShareToTypeWithResp:(id)a0 isAwemeSource:(BOOL)a1 isShareToStory:(BOOL)a2;
+ (BOOL)supportAnchorType:(long long)a0;
+ (BOOL)isLunaMusicShare:(id)a0;
+ (id)shareShootWay:(id)a0;
+ (unsigned long long)getMediaTypeWithShareResp:(id)a0 withParams:(id)a1;
+ (void)trackOpenPlatformShareParamUseMonitorWithShareResp:(id)a0 withParams:(id)a1;
+ (void)shareProcessFinishWithResp:(id)a0 isSuccess:(BOOL)a1 completion:(id /* block */)a2;
+ (void)handlePublishResourceWithResp:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (id)getCheckPermissionParamsWithResp:(id)a0 WithParams:(id)a1;
+ (BOOL)handleScopeCheckResult:(id)a0 resp:(id)a1;
+ (void)handleStarEnterWithResp:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)handleAdditionalResourceWithResp:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)downloadMediaWithResp:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)handleOpenShareTitle:(id)a0 withParams:(id)a1;
+ (void)handleOpenShareImageStickers:(id)a0 withParams:(id)a1;
+ (void)handleOpenShareHashtagStickers:(id)a0 withParams:(id)a1;
+ (void)handleOpenShareMentionStickers:(id)a0 withParams:(id)a1;
+ (void)handleOpenShareQuickFlashStickers:(id)a0 withParams:(id)a1;
+ (void)fillMentionsAndMentionStickersInfo:(id)a0 WithCompletion:(id /* block */)a1;
+ (void)handlePoiIdAndOpenSharePoiStickers:(id)a0 withParams:(id)a1 completion:(id /* block */)a2;
+ (void)handleCoverPath:(id)a0 withParams:(id)a1 completion:(id /* block */)a2;
+ (BOOL)checkStickerAvailble:(id)a0 withResp:(id)a1 withParams:(id)a2;

@end
