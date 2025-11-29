@class Pitaya, PTYSetupInfo, NSDictionary;

@interface BDTPitayaManager : NSObject

@property (retain, nonatomic) Pitaya *pitayaInstance;
@property (retain, nonatomic) PTYSetupInfo *setupInfo;
@property BOOL isDetecting;
@property (copy, nonatomic) NSDictionary *lastOutput;

+ (BOOL)isPitayaReady;
+ (id)detectResultMap;
+ (struct { BOOL x0; long long x1; })getPitayaRunTaskResult;
+ (struct { BOOL x0; long long x1; })getPitayaQueryPackageResult;
+ (id)sharedInstance;

- (void)scanWithImage:(id)a0 detectBoxRect:(id)a1 callback:(id /* block */)a2;
- (void)initPitayaInnerWithRetryTimes:(long long)a0;
- (void)handlePitayaSharedInstanceReadyNotification:(id)a0;
- (void)scanWithImage:(id)a0 detectBoxRect:(id)a1 bussiness:(id)a2 callback:(id /* block */)a3;
- (void)runPackage:(id)a0 params:(id)a1 runCallback:(id /* block */)a2 async:(BOOL)a3;
- (struct { BOOL x0; long long x1; })isPitayaReadyWithBussiness:(id)a0;
- (void)initPitayaWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
