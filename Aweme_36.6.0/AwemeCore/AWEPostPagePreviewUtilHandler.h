@class NSString, AWEStudioComposerPublishBasicFeature;
@protocol IESServiceRegister, IESServiceProvider, AWEPostPageContext, AWEPostPagePreviewUtilServiceDependencies, ACCSequenceEditServiceProtocol, AWEPostPageFeatureConfigService;

@interface AWEPostPagePreviewUtilHandler : NSObject <AWEPostPagePreviewUtilService>

@property (retain, nonatomic) id<AWEPostPageContext> context;
@property (weak, nonatomic) id<IESServiceRegister, IESServiceProvider> serviceContainer;
@property (retain, nonatomic) id<AWEPostPagePreviewUtilServiceDependencies> dependencies;
@property (readonly, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<AWEPostPageFeatureConfigService> featureConfigService;
@property (weak, nonatomic) AWEStudioComposerPublishBasicFeature *basicFeature;
@property (retain, nonatomic) id didConfigCoverSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)configCoverImage;
- (id)configPreviewControllerWithImage:(id)a0 index:(double)a1 editService:(id)a2;
- (void)didChooseVieoCover;
- (void).cxx_destruct;

@end
