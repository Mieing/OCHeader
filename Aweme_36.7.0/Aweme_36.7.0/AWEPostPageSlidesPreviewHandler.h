@class NSString, AWEStudioComposerPublishBasicFeature, AWEPostPageContext, AWEPostPagePreviewServiceDependencies, NSObject;
@protocol ACCSequenceEditServiceProtocol, AWEPublishEditServiceManagerProtocol, IESServiceProvider, AWEPostPageFeatureConfigService, AWEPostPagePreviewElementProtocol;

@interface AWEPostPageSlidesPreviewHandler : NSObject <AWEPostPagePreviewService>

@property (retain, nonatomic) AWEPostPageContext *context;
@property (retain, nonatomic) AWEPostPagePreviewServiceDependencies *dependencies;
@property (readonly, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManagerForChooseCover;
@property (nonatomic) BOOL isBuildingCoverChooseVC;
@property (weak, nonatomic) id<AWEPostPageFeatureConfigService> featureConfigService;
@property (weak, nonatomic) AWEStudioComposerPublishBasicFeature *basicFeature;
@property (nonatomic) BOOL isPreviewPage;
@property (nonatomic) BOOL coverImageDoneSignal;
@property (weak, nonatomic) NSObject<AWEPostPagePreviewElementProtocol> *previewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)configCoverAndFirstFrame;
- (void)configCoverImage;
- (void)chooseCoverActionWithChooseCoverPageWillShowBlock:(id /* block */)a0 chooseCoverPageWillDismissBlock:(id /* block */)a1 indexForCoverEdit:(long long)a2 activeNLE:(BOOL)a3 enterMethod:(id)a4;
- (void)previewImageAtIndex:(long long)a0;
- (void)p_trackClickPreviewWithIndex:(long long)a0;
- (void)handlerCoverImage:(id)a0 isFromChooseCover:(BOOL)a1 isFromPreview:(BOOL)a2 animated:(BOOL)a3;
- (void)handleCurrentFrameCaptureFinish:(id)a0;
- (void)handlerCoverImage:(id)a0 isFromChooseCover:(BOOL)a1 isFromPreview:(BOOL)a2;
- (void)p_configCoverAndFirstFrame;
- (void)subscribeEditPageCurrentFrameExportFinish;
- (void)trackClickCover:(id)a0;
- (void)chooseNewSlidesCoverImageWithChooseCoverPageWillShowBlock:(id /* block */)a0 chooseCoverPageWillDismissBlock:(id /* block */)a1 indexForCoverEdit:(long long)a2 activeNLE:(BOOL)a3 enterMethod:(id)a4;
- (void)didChooseVideoCover;
- (void).cxx_destruct;
- (void)dealloc;

@end
