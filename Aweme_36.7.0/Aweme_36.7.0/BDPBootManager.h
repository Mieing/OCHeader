@class BDPSchema, NSString, BDPPromise, UIViewController, BDPUniqueID, NSMutableArray, NSObject, BDPBootLogger, BDPAheadBooter, BDPTimorLaunchParam;
@protocol BDPCustomBootProtocol, BDPLoadInstanceProtocol, BDPBaseVCProtocol, OS_dispatch_queue;

@interface BDPBootManager : NSObject <BDPCustomBootProtocol>

@property (nonatomic) unsigned long long loadResultType;
@property (nonatomic) unsigned long long loadErrorCode;
@property (retain, nonatomic) id<BDPLoadInstanceProtocol> loadInstance;
@property (retain, nonatomic) id<BDPCustomBootProtocol> customBooter;
@property (retain, nonatomic) BDPBootLogger *bootLogger;
@property (retain, nonatomic) BDPAheadBooter *aheadBooter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bootQueue;
@property (retain, nonatomic) NSMutableArray *enterTimes;
@property (retain, nonatomic) NSMutableArray *leaveTimes;
@property (retain, nonatomic) NSMutableArray *appEnterTimes;
@property (retain, nonatomic) NSMutableArray *appLeaveTimes;
@property (nonatomic) double containerFirstDestoryTime;
@property (readonly, nonatomic) BDPTimorLaunchParam *launchParam;
@property (readonly, nonatomic) BDPUniqueID *uniqueID;
@property (readonly, copy, nonatomic) BDPSchema *schema;
@property (copy, nonatomic) NSString *exitType;
@property (readonly, nonatomic) BDPPromise *commonReadyPromise;
@property BOOL workPrefetchTriggered;
@property (nonatomic) unsigned long long closeFlag;
@property (readonly, nonatomic) unsigned long long bootType;
@property (weak, nonatomic) UIViewController<BDPBaseVCProtocol> *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)routeStartParamWithSchema:(id)a0;
+ (id)routeStartEventParamWithSchema:(id)a0 withDate:(id)a1 coldBoot:(BOOL)a2;
+ (long long)baseBundleType;
+ (long long)baseBundlePresetType;

- (void)updateSchema:(id)a0;
- (void)boot;
- (void)loadFinishWithResult:(unsigned long long)a0 error:(id)a1 extraParams:(id)a2;
- (void)launchEndWithNoRoute;
- (void)workBeforeClose:(id)a0;
- (void)loadUpdatedMetaInfoModelFinishWithResult:(unsigned long long)a0 error:(id)a1 extraParams:(id)a2;
- (id)initWithLaunchParam:(id)a0;
- (void)setupBgParam;
- (unsigned long long)bootCheckResultBeforeMeta;
- (id)fetchAndDownload;
- (void)trySetupLoadInstanceWithSchema:(id)a0;
- (BOOL)excuteWarmBootCore;
- (void)eventWarmBootCost:(BOOL)a0 errMsg:(id)a1;
- (void)setupLoadInstanceWithModel:(id)a0;
- (id)stateParamWithTime:(double)a0 clearBgParam:(BOOL)a1;
- (BOOL)isLCPinBg:(double)a0 enterTimes:(id)a1 leavesTimes:(id)a2;
- (void)destroyBgParam;
- (void)enterBackGround;
- (void)enterForeGround;
- (id)stateParamWithLCP:(double)a0;
- (id)stateParamWithFP:(double)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)dealloc;

@end
