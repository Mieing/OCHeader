@class MMFlutterInstance, MJFlutterImageEditorSession, NSString, NSObject;
@protocol FlutterTextureRegistry;

@interface MMMassImageEditorPlugin : NSObject <MMFlutterPlugin, FPMaasImageEditorApi>

@property (retain, nonatomic) NSObject<FlutterTextureRegistry> *flutterTextureRegistery;
@property (retain, nonatomic) MJFlutterImageEditorSession *imageEditorSession;
@property (retain, nonatomic) MMFlutterInstance *pageInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (id)getSdkVersionWithError:(id *)a0;
- (void)launchMaasCoreWithCompletion:(id /* block */)a0;
- (void)teardownMaasWithCompletion:(id /* block */)a0;
- (id)releaseFlutterInstanceWithError:(id *)a0;
- (id)deviceSupportWithError:(id *)a0;
- (void).cxx_destruct;

@end
