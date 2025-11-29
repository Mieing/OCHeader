@class ACCCameraSubscription, NLEInterface_OC, NSString, NSValue, UIView;
@protocol ACCLivePhotoEditBaseServiceProtocol, ACCEditAIExpandProtocol, ACCEditPreviewProtocol, ACCMediaContainerViewProtocol, ACCImageEditHDRProtocol, ACCEditAudioEffectProtocol, IESServiceProvider, ACCImageEditTemplateProtocol, ACCEditMultiTrackProtocol, ACCEditStickerProtocol, ACCEditImageAlbumMixedProtocol, ACCEditBeautyProtocol, ACCEditFilterProtocol, ACCEditCanvasProtocol, ACCEditEffectProtocol, ACCEditCaptureFrameProtocol, ACCEditBGMProtocol, ACCEditHDRProtocol, ACCLivePhotoEditServiceProtocol, ACCEditSessionBuilderProtocol, ACCEditAISyncGenetateProtocol;

@interface ACCNLEEditService : NSObject <ACCEditPreviewMessageProtocolD, ACCEditServiceProtocol>

@property (retain, nonatomic) UIView<ACCMediaContainerViewProtocol> *mediaContainerView;
@property (weak, nonatomic) NLEInterface_OC *nle;
@property (weak, nonatomic) id<IESServiceProvider> serviceResolver;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) BOOL hasHandledRemoveCover;
@property (nonatomic) BOOL needHandledSensorialPlayFrameRender;
@property (nonatomic) BOOL hasHandledFirstRender;
@property (nonatomic) BOOL hasHandledSensorialPlayFrameRender;
@property (retain, nonatomic) id<ACCEditBGMProtocol> backupBGMWrapper;
@property (retain, nonatomic) NSValue *mediaSizeValue;
@property (nonatomic) BOOL isInfini;
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
@property (retain, nonatomic) id<ACCEditBGMProtocol> sequenceBGM;
@property (retain, nonatomic) id<ACCLivePhotoEditServiceProtocol> livePhoto;
@property (retain, nonatomic) id<ACCEditAIExpandProtocol> aiExpand;
@property (retain, nonatomic) id<ACCEditAISyncGenetateProtocol> aiSync;
@property (nonatomic) BOOL doNotRenderWhenNotActive;
@property (copy, nonatomic) id /* block */ getMediaContainerViewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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
- (void)configResolver:(id)a0;
- (void)updateVideoDataFinished:(id)a0 updateType:(long long)a1 multiTrack:(BOOL)a2;
- (void)handledFirstFrameRemoveCover;
- (void)handledFirstFrameRenderBlk;
- (void)handledSensorialPlayFrameRenderBlk;
- (void)configMediaSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addSubscriber:(id)a0;

@end
