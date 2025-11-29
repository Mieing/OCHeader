@class NSString, AWELiveVerifyApi;
@protocol IESLiveTracker;

@interface AWELiveZMCertManager : NSObject <BytedCertTrackEventDelegate>

@property (retain, nonatomic) AWELiveVerifyApi *vertifyApi;
@property (retain, nonatomic) id<IESLiveTracker> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)baseParams;
- (void)openByteCertWithParams:(id)a0 completion:(id /* block */)a1;
- (void)trackWithEvent:(id)a0 params:(id)a1;
- (void)openFaceLivingBodyWithParams:(id)a0 withCompletion:(id /* block */)a1;
- (void)openOCRTakePhoto:(id)a0 withCompletion:(id /* block */)a1;
- (void)uploadIDCard:(id)a0 withCompletion:(id /* block */)a1;
- (void)verifyWithModel:(id)a0 zhimaToken:(id)a1 completion:(id /* block */)a2;
- (void)adapter_openOCRTakePhoto:(id)a0 withCompletion:(id /* block */)a1;
- (void)adapter_uploadIDCard:(id)a0 withCompletion:(id /* block */)a1;
- (void)adapter_openFaceLivingBodyWithParams:(id)a0 withCompletion:(id /* block */)a1;
- (id)jsbDictionary:(id)a0;
- (void)p_faceLivingBodyWithParams:(id)a0 withCompletion:(id /* block */)a1;
- (void)checkVerifyResult:(id)a0 completion:(id /* block */)a1;
- (void)getOptimizationGrayscaleStrategyWithEnterFrom:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
