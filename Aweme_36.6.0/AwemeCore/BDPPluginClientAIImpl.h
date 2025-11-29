@class NSString, CKFeatureExtractor, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDPPluginClientAIImpl : NSObject <BDPClientAIPluginDelegate> {
    BOOL _hasRegisterPolicyService;
    CKFeatureExtractor *_extractor;
    NSString *_policyConfig;
    NSObject<OS_dispatch_queue> *_executeQueue;
    NSDictionary *_qrcodeImageHashDict;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) void *enigmaHandler;
@property (readonly, nonatomic) BOOL isReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)bdp_registerQRCodeServiceWithCallback:(id /* block */)a0;
- (void)bdp_releaseQRCodeService;
- (void)bdp_runQRCodeRecognizerWithInputImage:(id)a0 completion:(id /* block */)a1;
- (void)bdp_excuteBusiness:(id)a0 inputParam:(id)a1 async:(BOOL)a2 callBack:(id /* block */)a3;
- (void)bdp_registerArtSoterBusinessConfig:(id)a0;
- (void)bdp_registerPolicyCheckServiceWithConfig:(id)a0;
- (void)bdp_runArtSoterBusiness:(id)a0 inputImage:(id)a1 completion:(id /* block */)a2;
- (void)bdp_runPolicyCheckWithInputImage:(id)a0 callback:(id /* block */)a1;
- (void)bdp_queryPackage:(id)a0 callback:(id /* block */)a1;
- (void)bdp_runTask:(id)a0 configBlock:(id /* block */)a1 taskCallback:(id /* block */)a2;
- (void)bdp_downloadPakcage:(id)a0 callback:(id /* block */)a1;
- (BOOL)bdp_useSamplingUploadIfNeededWithRate:(double)a0;
- (BOOL)bdp_requestUpdateAll;
- (void)bdp_requestUpdate:(id)a0 configBlock:(id /* block */)a1 callback:(id /* block */)a2;
- (void)bdp_registerMessageHandler:(id)a0 callback:(id /* block */)a1;
- (void)bdp_removeMessageHandler:(id)a0;
- (void)bdp_releaseEngine:(id)a0;
- (void)bdp_releaseAllEngines;
- (void).cxx_destruct;
- (id)init;

@end
