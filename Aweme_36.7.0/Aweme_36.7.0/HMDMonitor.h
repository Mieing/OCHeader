@class HMDPerformanceReportRequest, NSString, HMDMonitorCurve, NSLock, NSDictionary, NSObject, NSMutableArray, NSNumber;
@protocol OS_dispatch_source;

@interface HMDMonitor : HeimdallrModule <HMDMonitorStorageDelegate> {
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_monitorCallbacks;
    NSLock *_monitorLock;
}

@property (retain, nonatomic) HMDPerformanceReportRequest *reportingRequest;
@property (retain, nonatomic) NSNumber *customReportIMP;
@property (retain, nonatomic) HMDPerformanceReportRequest *reportingRequest;
@property (retain, nonatomic) HMDPerformanceReportRequest *reportingRequest;
@property (retain, nonatomic) NSDictionary *customUploadDic;
@property (retain, nonatomic) NSMutableArray *customScenes;
@property (copy, nonatomic) NSString *customSceneStr;
@property (nonatomic) BOOL hasRegisterKVO;
@property (retain, nonatomic) NSString *currentSpecialScene;
@property (readonly, nonatomic) HMDMonitorCurve *curve;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) double refreshInterval;
@property (nonatomic) double curPageUsage;
@property (nonatomic) BOOL isStartByOpenCustomScene;
@property BOOL isRunningWithSpecialScene;

+ (id)sharedMonitor;

- (void)updateConfig:(id)a0;
- (BOOL)needSyncStart;
- (BOOL)performanceDataSource;
- (void)cleanupWithConfig:(id)a0;
- (void)updateRecordWithConfig:(id)a0;
- (long long)dbMaxSize;
- (void)performanceDataSaveImmediately;
- (void)prepareForDefaultStart;
- (void)setupWithHeimdallr:(id)a0;
- (void)startWithInterval:(double)a0;
- (BOOL)enableUpload;
- (void)dropAllDataForServerState;
- (id)performanceDataWithCountLimit:(long long)a0;
- (id)debugRealPerformanceDataWithConfig:(id)a0;
- (void)cleanupPerformanceDataWithConfig:(id)a0;
- (void)performanceDataDidReportSuccess:(BOOL)a0;
- (id)performanceDataWithLimitSize:(unsigned long long)a0 limitCount:(long long)a1 currentSize:(unsigned long long *)a2;
- (void)performanceSizeLimitedDataDidReportSuccess:(BOOL)a0;
- (void)cleanupNotUploadAndReportedPerformanceData;
- (id)fetchUploadRecords;
- (void)enterCustomScene:(id)a0;
- (void)leaveCustomScene:(id)a0;
- (void)didEnterScene:(id)a0;
- (void)willLeaveScene:(id)a0;
- (void)monitorRunWithSpecialScene;
- (void)monitorStopWithSpecialScene;
- (id)hmdCutomPerformanceDataWithCountLimit:(long long)a0;
- (id)getDataWithRecords:(id)a0;
- (void)hmdCutomPerformanceDataReportSuccess:(BOOL)a0;
- (void)cleanupUnusedPerformanfeData;
- (void)__setupTimer:(double)a0;
- (void)__changeTimer:(double)a0;
- (BOOL)customSceneListenEnabled;
- (void)startWithListenSpecialScene;
- (void)leaveSpecialScene;
- (void)stopWithListenSpecialScene;
- (void)__cancelTimer;
- (void)removeKVO;
- (void)kvoDidEnterNewScene:(id)a0;
- (void)kvoWillLeaveNewScene:(id)a0;
- (void)listenEnterSpecialSceneToOpenMonitor:(id)a0;
- (void)listenLeaveSpecialSceneToOpenMonitor:(id)a0;
- (void)enterSpecialScene:(id)a0;
- (void)addMonitorCallbacks:(id /* block */)a0;
- (void)removeMonitorCallbacks:(id /* block */)a0;
- (void)recordSizeCalculationWithRecord:(id)a0;
- (BOOL)monitorCurve:(id)a0 willSaveRecords:(id)a1;
- (void)setDropData:(BOOL)a0;
- (void)dropAllMonitorRecords;
- (void).cxx_destruct;
- (id)refresh;
- (id)init;
- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (Class)storeClass;
- (void)registerKVO;

@end
