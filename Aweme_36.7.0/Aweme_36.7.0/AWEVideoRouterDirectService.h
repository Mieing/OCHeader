@class NSString, AWEUITransitionHost;

@interface AWEVideoRouterDirectService : NSObject <AWEStudioDirectService, AWEStudioDirectUtilService>

@property (retain, nonatomic) AWEUITransitionHost *transitionHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)startMusicWorkFlowWithInfo:(id)a0;
- (id)createVideoFromMusic;
- (id)startUploadPhotoWithInfo:(id)a0 poiInfo:(id)a1 commercialAnchorModel:(id)a2;
- (id)createVideoFromMusicWithInfo:(id)a0 missionModel:(id)a1 commercialAnchorModel:(id)a2 shouldApplySticker:(BOOL)a3;
- (id)startMusicWorkFlowWithProcessDataBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (id)startUploadVideoWorkFlowWithRefer:(id)a0;
- (id)startUploadAssetForStickPointVideoWithInfo:(id)a0 initialSelectedAssets:(id)a1;
- (id)startUploadWithPublishViewModel:(id)a0 inputData:(id)a1;
- (id)startUploadAssetForStickPointVideoWithInfo:(id)a0;
- (id)startUploadPhotoWithInfo:(id)a0 poiInfo:(id)a1;
- (id)startOriginalTextWithInfo:(id)a0;
- (id)startOriginalTextWithPublishModel:(id)a0;
- (id)createVideoFromMusicWithInfo:(id)a0 nearbyModel:(id)a1;
- (id)startMusicWorkFlowWithInfo:(id)a0 missionModel:(id)a1 commercialAnchorModel:(id)a2 nearbyModel:(id)a3 shouldApplySticker:(BOOL)a4;
- (void)trackShootAtLongPressPlusButtonSceneWithInfo:(id)a0;
- (void)trackShootAtLongPressPlusButtonOpenAlbum;
- (id)startMusicWorkFlowWithInfo:(id)a0 missionModel:(id)a1 commercialAnchorModel:(id)a2 nearbyModel:(id)a3 shouldApplySticker:(BOOL)a4 processDataBlock:(id /* block */)a5 completion:(id /* block */)a6;
- (id)startMusicAndVideoWorkFlowWithInfo:(id)a0;
- (id)buildWorkFlowTrackParametersFrom:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
