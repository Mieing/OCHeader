@class ACCCameraSubscription, NSString, UIView, NSMutableArray;
@protocol ACCMediaContainerViewProtocol, ACCEditAIExpandProtocol, ACCEditPreviewProtocol, ACCLivePhotoEditBaseServiceProtocol, ACCImageEditTemplateProtocol, ACCEditAudioEffectProtocol, IESServiceProvider, ACCEditMultiTrackProtocol, ACCImageEditHDRProtocol, ACCEditStickerProtocol, ACCEditImageAlbumMixedProtocol, ACCEditBeautyProtocol, ACCEditFilterProtocol, ACCEditCanvasProtocol, ACCImageAlbumEditorSessionProtocol, ACCEditEffectProtocol, ACCEditCaptureFrameProtocol, ACCEditBGMProtocol, ACCEditHDRProtocol, ACCLivePhotoEditServiceProtocol, ACCEditSessionBuilderProtocol, ACCEditAISyncGenetateProtocol;

@interface ACCRichTextEditorService : NSObject <ACCEditServiceProtocol>

@property (retain, nonatomic) NSMutableArray *plugins;
@property (retain, nonatomic) id<ACCImageAlbumEditorSessionProtocol> editSession;
@property (weak, nonatomic) id<IESServiceProvider> serviceResolver;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) id<ACCEditFilterProtocol> filter;
@property (retain, nonatomic) id<ACCEditStickerProtocol> sticker;
@property (retain, nonatomic) id<ACCEditImageAlbumMixedProtocol> imageAlbumMixed;
@property (retain, nonatomic) id<ACCImageEditHDRProtocol> imageEditHDR;
@property (retain, nonatomic) id<ACCEditCaptureFrameProtocol> captureFrame;
@property (retain, nonatomic) id<ACCEditAudioEffectProtocol> audioEffect;
@property (retain, nonatomic) id<ACCEditBGMProtocol> BGM;
@property (retain, nonatomic) UIView<ACCMediaContainerViewProtocol> *mediaContainerView;
@property (copy, nonatomic) id /* block */ getMediaContainerViewBlock;
@property (readonly, nonatomic) id<ACCEditBeautyProtocol> beauty;
@property (readonly, nonatomic) id<ACCEditCanvasProtocol> canvas;
@property (readonly, nonatomic) id<ACCEditPreviewProtocol> preview;
@property (readonly, nonatomic) id<ACCEditHDRProtocol> hdr;
@property (readonly, nonatomic) id<ACCLivePhotoEditServiceProtocol> livePhoto;
@property (readonly, nonatomic) id<ACCEditEffectProtocol> effect;
@property (readonly, nonatomic) id<ACCEditMultiTrackProtocol> multiTrack;
@property (readonly, nonatomic) id<ACCImageEditTemplateProtocol> imageEditTemplate;
@property (readonly, nonatomic) id<ACCEditAIExpandProtocol> aiExpand;
@property (readonly, nonatomic) id<ACCEditAISyncGenetateProtocol> aiSync;
@property (copy, nonatomic) id /* block */ firstFrameVisibleFirstResponse;
@property (retain, nonatomic) id<ACCEditSessionBuilderProtocol> editBuilder;
@property (copy, nonatomic) id /* block */ firstFrameTrackBlock;
@property (copy, nonatomic) id /* block */ sensorialPlayFrameTrackBlock;
@property (readonly, nonatomic) id<ACCLivePhotoEditBaseServiceProtocol> livePhotoBase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildEditSession;
- (id)initWithPublishModel:(id)a0;
- (void)dismissPreviewEdge;
- (void)configResolver:(id)a0;
- (id)propertyForProtocol;
- (void)buildPlugins;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
