@class UIView, NSString, NSHashTable;
@protocol AFDMomentCameraPreviewProtocol, ACCServiceProvideRecipe, VERecorderPublicProtocol;

@interface CECMomentCameraFactoryImpls : NSObject <CECMomentCameraFactory, ACCCameraProvider>

@property (retain, nonatomic) id<VERecorderPublicProtocol> camera;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceProvider;
@property (retain, nonatomic) UIView<AFDMomentCameraPreviewProtocol> *preview;
@property (retain, nonatomic) UIView<AFDMomentCameraPreviewProtocol> *secondPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCameraIfNeeded:(id)a0;
- (void)configResolver:(id)a0;
- (void)addCameraListener:(id)a0;
- (void)triggerCameraFresh;
- (id)createCameraWithContext:(const void *)a0 config:(id)a1 completion:(id /* block */)a2;
- (id)initWithPreview:(id)a0 secondPreview:(id)a1;
- (id)buildCameraWithContext:(const void *)a0 config:(id)a1 completionBlock:(id /* block */)a2;
- (void)releaseCamera;
- (void).cxx_destruct;
- (void)removeSubviews:(id)a0;

@end
