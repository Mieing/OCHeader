@class NSString, AWEOpenShareResp;

@interface AWEOpenSharePublishProvider : NSObject <AWEPublishTaskMessage>

@property (retain, nonatomic) AWEOpenShareResp *shareResp;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL isJianyingRedPack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareProvider;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)shareWithShareResponse:(id)a0 params:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleSaveAsDraft:(id)a0;
- (void)shareRespInitRepoModel:(id)a0 params:(id)a1;
- (void)addTitleWithApi:(id)a0 shareResp:(id)a1;
- (void)addQuickFlashStickerWithApi:(id)a0 shareResp:(id)a1 isCamera:(BOOL)a2;
- (void)addPOIStickerWithApi:(id)a0 shareResp:(id)a1;
- (void)addHashTagStickerWithApi:(id)a0 shareResp:(id)a1;
- (void)addMentionStickerWithApi:(id)a0 shareResp:(id)a1;
- (void)addImageStickerWithApi:(id)a0 shareResp:(id)a1 withCompletion:(id /* block */)a2;
- (void)addMusicWithApi:(id)a0 shareResp:(id)a1 isNote:(BOOL)a2 isCamera:(BOOL)a3;
- (void)addEffectIDWithApi:(id)a0 shareResp:(id)a1 isCamera:(BOOL)a2;
- (void)handleBusinessTaskModel:(id)a0 withCompletion:(id /* block */)a1;
- (void)addJianYinRedPackInfo:(id)a0;
- (void)addOpenShareInfo:(id)a0;
- (void)addAnchorWithApi:(id)a0 shareResp:(id)a1;
- (void)trackOpenPlatformShareParamUseMonitorWithShareResp:(id)a0;
- (void)handler:(id)a0 setExtensionModelWithShareResp:(id)a1;
- (void)handleCancelEvent:(id)a0;
- (void)handleBasicConfig:(id)a0 withSticker:(id)a1;
- (BOOL)allowAllInstancesAddStickerWithApi:(id)a0 shareResp:(id)a1;
- (void)reportMonitorWithTask:(id)a0 withPublishModel:(id)a1 withResp:(id)a2 error:(id)a3;
- (void)tryShowPopView:(id)a0;
- (BOOL)checkShouldShowPopView:(id)a0;
- (void)logShareSucceed:(BOOL)a0 parameters:(id)a1;
- (id)redPackShootWays;
- (id)unmodifiablePublishParamsFromshareResp:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handleEnd:(BOOL)a0;

@end
