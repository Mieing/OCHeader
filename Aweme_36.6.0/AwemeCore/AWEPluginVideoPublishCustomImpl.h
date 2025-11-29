@class NSString, AWEAnchorCustomTitleViewController, BDPUniqueID, BDPVideoPublishModel;

@interface AWEPluginVideoPublishCustomImpl : NSObject <BDPVideoPublishDelegate, AWEPublishTaskMessage, AWEIronManShareTaskMessage, AWEStudioPublishPathMessage>

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *stickerID;
@property (nonatomic) BOOL isUploadingUserInfo;
@property (retain, nonatomic) BDPVideoPublishModel *model;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) AWEAnchorCustomTitleViewController *customizedTitleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)ironManVideoPublishResult:(BOOL)a0;
- (void)publishFinishWithType:(unsigned long long)a0;
- (void)shareTaskDone;
- (void)createCutSameMVTemplateWithTemplateId:(id)a0 withModel:(id)a1 withInfo:(id)a2 appID:(id)a3 didComplete:(id /* block */)a4;
- (void)createVideoWithModel:(id)a0 withInfo:(id)a1 appID:(id)a2;
- (void)startVideoWithStickerID:(id)a0 model:(id)a1 info:(id)a2 appID:(id)a3;
- (BOOL)needHandleMessage;
- (void)bdp_anchorCustomizeTitleWithResultModel:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (BOOL)bdp_checkAbilityEnable;
- (void)login:(id)a0 completion:(id /* block */)a1;
- (void)videoSceneDidStart:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (id)getVideoTypeString:(id)a0;
- (void)bdp_videoSceneWithModel:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)bdp_videoMountWithModel:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (id)bdp_getVideoSceneBlockList;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
