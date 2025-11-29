@class NSString, NSMutableArray, NSObject;
@protocol HMDUIFrozenDetectProtocol, OS_dispatch_queue, HMDUIFrozenAnimationProtocol;

@interface HMDUIFrozenManager : NSObject <HMDUIViewHierarchyDelegate> {
    NSObject<OS_dispatch_queue> *_serailQueue;
    BOOL _initFlag;
    BOOL _viewStacksMonitorFlag;
    NSString *_commitID;
}

@property (retain, nonatomic) NSString *rootDirPath;
@property (retain, nonatomic) NSString *rootLastTimeDirPath;
@property (readonly, nonatomic) BOOL enable;
@property (nonatomic) unsigned long long operationCountThreshold;
@property (nonatomic) double launchCrashThreshold;
@property (nonatomic) BOOL uploadAlog;
@property (nonatomic) BOOL enableGestureMonitor;
@property (nonatomic) unsigned long long gestureCountThreshold;
@property (nonatomic) BOOL enableViewStacksMonitor;
@property (nonatomic) BOOL enableVCStacksMonitor;
@property (nonatomic) BOOL enableDismissVCProtection;
@property (nonatomic) unsigned long long dismissOperationCountThreshold;
@property (nonatomic) BOOL enableTransitionMonitor;
@property (nonatomic) unsigned long long transitionRecordCountLimit;
@property (weak, nonatomic) id<HMDUIFrozenDetectProtocol> delegate;
@property (weak, nonatomic) id<HMDUIFrozenAnimationProtocol> animationDelegate;
@property (retain, nonatomic) NSMutableArray *operationPoints;
@property (nonatomic) BOOL enableViewExtraInfoInjection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)initDirectory;
- (void)clearLocalFile;
- (void)initUIFrozen;
- (void)terminate:(id)a0;
- (void)swizzleMonitorMethod;
- (id)imageRootPath;
- (id)viewHierarchy:(id)a0 targetView:(id)a1;
- (id)responseChain:(id)a0;
- (id)getViewStacks:(id)a0;
- (id)nearViewController:(id)a0;
- (id)nearViewControllerDesc:(id)a0;
- (id)getVCStacks:(id)a0;
- (BOOL)vcIsDismiss:(id)a0;
- (BOOL)uploadViewExtraInfo;
- (id)viewExtraInfo:(id)a0;
- (void)checkExceptionLastTime;
- (id)imageReadRootPath;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;

@end
