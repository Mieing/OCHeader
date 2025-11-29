@class NSString;
@protocol HTSLiveCameraEffectProvider;

@interface IESECLiveCameraEffectProviderIESECBridger : NSObject <IESECLiveCameraEffectProvider>

@property (retain, nonatomic) id<HTSLiveCameraEffectProvider> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (id)cameraPreview;
- (void).cxx_destruct;

@end
