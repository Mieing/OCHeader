@class ACCCameraSubscription, NSString, VEEditorSession, NSMutableArray, UIView;
@protocol ACCEditImageAlbumMixedProtocol, ACCEditAudioEffectProtocol, ACCImageEditHDRProtocol, ACCImageEditTemplateProtocol, ACCEditSessionBuilderProtocol, ACCLivePhotoEditBaseServiceProtocol, ACCEditAISyncGenetateProtocol, ACCEditMultiTrackProtocol, ACCEditBGMProtocol, ACCLivePhotoEditServiceProtocol, ACCEditCaptureFrameProtocol, ACCEditCanvasProtocol, ACCEditAIExpandProtocol, ACCEditHDRProtocol, ACCEditPreviewProtocol, ACCEditEffectProtocol, ACCMediaContainerViewProtocol, ACCEditBeautyProtocol, ACCEditStickerProtocol, ACCEditFilterProtocol;

@interface ACCNLEPublishEditService : NSObject <ACCEditPreviewMessageProtocolD, ACCEditServiceProtocol>

@property (retain, nonatomic) NSMutableArray *plugins;
@property (weak, nonatomic) VEEditorSession *editSession;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) BOOL hasHandledFirstRender;
@property (nonatomic) BOOL hasHandledSensorialPlayFrameRender;
@property (retain, nonatomic) UIView<ACCMediaContainerViewProtocol> *mediaContainerView;
@property (retain, nonatomic) id<ACCEditBeautyProtocol> beauty;
@property (retain, nonatomic) id<ACCEditFilterProtocol> filter;
@property (retain, nonatomic) id<ACCEditStickerProtocol> sticker;
@property (retain, nonatomic) id<ACCEditPreviewProtocol> preview;
@property (retain, nonatomic) id<ACCEditHDRProtocol> hdr;
@property (retain, nonatomic) id<ACCEditAudioEffectProtocol> audioEffect;
@property (retain, nonatomic) id<ACCEditBGMProtocol> BGM;
@property (retain, nonatomic) id<ACCEditEffectProtocol> effect;
@property (retain, nonatomic) id<ACCEditCaptureFrameProtocol> captureFrame;
@property (retain, nonatomic) id<ACCEditCanvasProtocol> canvas;
@property (retain, nonatomic) id<ACCEditMultiTrackProtocol> multiTrack;
@property (retain, nonatomic) id<ACCEditAIExpandProtocol> aiExpand;
@property (retain, nonatomic) id<ACCEditAISyncGenetateProtocol> aiSync;
@property (copy, nonatomic) id /* block */ getMediaContainerViewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<ACCLivePhotoEditServiceProtocol> livePhoto;
@property (readonly, nonatomic) id<ACCEditImageAlbumMixedProtocol> imageAlbumMixed;
@property (readonly, nonatomic) id<ACCImageEditHDRProtocol> imageEditHDR;
@property (readonly, nonatomic) id<ACCImageEditTemplateProtocol> imageEditTemplate;
@property (copy, nonatomic) id /* block */ firstFrameVisibleFirstResponse;
@property (retain, nonatomic) id<ACCEditSessionBuilderProtocol> editBuilder;
@property (copy, nonatomic) id /* block */ firstFrameTrackBlock;
@property (copy, nonatomic) id /* block */ sensorialPlayFrameTrackBlock;
@property (readonly, nonatomic) id<ACCLivePhotoEditBaseServiceProtocol> livePhotoBase;

- (void)buildEditSession;
- (id)initWithPublishModel:(id)a0;
- (void)resetEditSessionWithPublishModel:(id)a0;
- (void)updateVideoDataFinished:(id)a0 updateType:(long long)a1 multiTrack:(BOOL)a2;
- (void)buildPlugins;
- (void)handledSensorialPlayFrameRenderBlk;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
