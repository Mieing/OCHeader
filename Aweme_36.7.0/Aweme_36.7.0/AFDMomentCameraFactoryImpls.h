@class IESMMCameraConfig, NSString, NSHashTable, UIView;
@protocol AFDMomentCameraPreviewProtocol, VERecorderPublicProtocol;

@interface AFDMomentCameraFactoryImpls : NSObject <AFDMomentCameraFactory>

@property (retain, nonatomic) IESMMCameraConfig *config;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) id<VERecorderPublicProtocol> camera;
@property (retain, nonatomic) UIView<AFDMomentCameraPreviewProtocol> *preview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addCameraListener:(id)a0;
- (id)createCameraWithContext:(const void *)a0 config:(id)a1 completion:(id /* block */)a2;
- (id)buildCameraWithContext:(const void *)a0 config:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithPreview:(id)a0;

@end
