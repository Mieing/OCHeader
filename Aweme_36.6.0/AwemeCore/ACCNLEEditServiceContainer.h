@class AWEStudioComposerEditPageConfig;
@protocol ACCBusinessInputData;

@interface ACCNLEEditServiceContainer : IESStaticContainer

@property (weak, nonatomic) id<ACCBusinessInputData> inputData;
@property (retain, nonatomic) AWEStudioComposerEditPageConfig *pageConfig;

- (id)initWithParentContainer:(id)a0 pageConfig:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditFilterProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditStickerProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditSessionBuilderProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditCaptureFrameProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditAudioEffectProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditBGMProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCPublishRepository:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditorDraftService:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditBeautyProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditPreviewProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditCanvasProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditHDRProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCLivePhotoEditServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditEffectProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditPlayerMonitorProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditMultiTrackProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCElementBindService:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditAISyncGenetateProtocol:(id)a1;
- (id)provideSingleton:(id)a0 AWEEditKit:(id)a1;
- (id)provideSingleton:(id)a0 AEKMegaEditor:(id)a1;
- (void).cxx_destruct;

@end
