@class NSString;

@interface BDPFacialRecognitionImpl : NSObject <BDPFacialRecognitionPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)bdp_facialRecognitionForServiceType:(long long)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)bdp_facialSDKVersioinForServiceType:(long long)a0;
- (long long)bdp_facialErrorCodeForServiceCode:(long long)a0 type:(long long)a1;
- (void)bdp_beginCertificationWithParams:(id)a0 faceVerificationOnly:(BOOL)a1 completion:(id /* block */)a2;
- (void)bdp_nativeGameFacialRecognitionForServiceType:(long long)a0 params:(id)a1 completion:(id /* block */)a2;

@end
