@class NSString, NSDictionary;
@protocol BDLOCNativeAppScreenRecordDelegate;

@interface BDLOCNativeAppScreenRecordPluginImpl : NSObject <BDPScreenRecordPluginDelegate, BDLOCNativeAppLifeCycleDelegate>

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long switchType;
@property (copy, nonatomic) NSDictionary *startExtra;
@property (weak, nonatomic) id<BDLOCNativeAppScreenRecordDelegate> delegate;
@property (readonly, nonatomic) BOOL isRecording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)bdp_screenRecorderForceStop:(id)a0 error:(id)a1 extra:(id)a2;
- (void)bdp_screenRecorderPauseWithAppID:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)bdp_screenRecorderResumeWithAppID:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)app:(id)a0 changePageWithPagePath:(id)a1 queryDict:(id)a2;
- (id)p_assembleError:(id)a0 errCode:(unsigned long long)a1;
- (void)bdp_screenRecorderDidStartWithAppID:(id)a0 extra:(id)a1;
- (void)bdp_screenRecorderWillStartWithAppID:(id)a0 extra:(id)a1;
- (void)bdp_screenRecorderWillStopWithAppID:(id)a0 extra:(id)a1;
- (void)bdp_screenRecorderDidStopWithAppID:(id)a0 extra:(id)a1;
- (void)bdp_screenRecorderWithSampleBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 extra:(id)a2;
- (void)bdp_screenRecorderWithAppID:(id)a0 exception:(id)a1 extra:(id)a2;
- (void)bdp_screenRecorderWithAppID:(id)a0 runningStateDidChanged:(unsigned long long)a1 extra:(id)a2;
- (void)bdp_buttonDidShow:(unsigned long long)a0 appID:(id)a1 extra:(id)a2;
- (void)bdp_buttonDidClick:(unsigned long long)a0 appID:(id)a1 extra:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
