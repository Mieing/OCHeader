@class NSObject, IESLandscapeFPSRecordPool, NSString, NSMutableArray, IESLiveInnerFeedContext;
@protocol OS_dispatch_queue;

@interface IESLiveInnerFeedLandscapeTraceController : NSObject <IESLiveInnerFeedLandscapeTraceService>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (nonatomic) double monitorDelay;
@property (copy, nonatomic) id /* block */ fpsCallback;
@property (copy, nonatomic) id /* block */ frameDropCallback;
@property (retain, nonatomic) IESLandscapeFPSRecordPool *fpsRecordPool;
@property (nonatomic) BOOL isFpsRecording;
@property (nonatomic) long long fpsRecordCount;
@property (nonatomic) long long fpsSamplerAccuracy;
@property (nonatomic) long long portraitRecordCount;
@property (nonatomic) long long portraitFpsSamplerAccuracy;
@property (nonatomic) double feedStartTime;
@property (nonatomic) BOOL isFeedRecording;
@property (retain, nonatomic) NSMutableArray *landscapeItems;
@property (nonatomic) BOOL isUse;
@property (nonatomic) unsigned long long curLandscapeScene;
@property (nonatomic) double p0ComponentLoadStartTime;
@property (nonatomic) BOOL isP0ComponentLoadRecording;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)startRecordP0ComponentLoadCost;
- (void)startRecordFeedCost;
- (void)endRecordFeedCostWithItems:(id)a0;
- (void)endRecordP0ComponentLoadCost;
- (void)closeMonitor;
- (void)innerFeedWillBeginDragging:(id)a0;
- (void)innerFeedDidEndDecelerating:(id)a0;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (void)setupFPSRecord;
- (void)clearFPSRecord;
- (void)reportP0ComponentLoadCost;
- (void)reportFeedCost;
- (void)reportFeedBeRequest;
- (void)openFpsMonitor;
- (void)openDropFpsMonitor;
- (void)reportLandscapeLiveFluencyWith:(id)a0;
- (void)startFPSRecordIn:(long long)a0;
- (void)endFPSRecordIn:(long long)a0;
- (void)reportFeedUseIfNeed:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)setup;

@end
