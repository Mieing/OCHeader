@class NSMutableDictionary, NSString, IESLiveGCDTimer, NSMutableArray;
@protocol IESLiveInteractTrackDataSource;

@interface IESLiveInteractionAudienceEnterServiceImp : NSObject <IESLiveInteractionAudienceEnterService>

@property (nonatomic) BOOL isPrefetch;
@property (retain, nonatomic) NSMutableDictionary *stageDict;
@property (retain, nonatomic) NSMutableDictionary *preloadEnterStageDict;
@property (retain, nonatomic) NSMutableArray *taskArray;
@property (nonatomic) unsigned long long stageFlag;
@property (nonatomic) double enterRoomStartTime;
@property (nonatomic) double preloadRealEnterRoomStartTime;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) double preloadStartTime;
@property (retain, nonatomic) id<IESLiveInteractTrackDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)isPreLoading;
- (void)asyncMarkStageTimeStamp:(unsigned long long)a0;
- (void)registerAutoReport:(id)a0 flag:(unsigned long long)a1 paramsBuilder:(id /* block */)a2;
- (void)markStageTimeStamp:(unsigned long long)a0;
- (void)reportLoadDuration:(id)a0 bizParams:(id)a1;
- (void)markStageTimeStamp:(unsigned long long)a0 with:(id)a1;
- (void)asyncMarkStageTimeStamp:(unsigned long long)a0 with:(id)a1;
- (void)markLynxStageTimeStamp:(id)a0;
- (void)preLoadWillStart;
- (void)preLoadEnterRoom;
- (void)initStageTimeStamp;
- (id)stageNameWithStage:(unsigned long long)a0;
- (id)currentTimestamp:(id)a0;
- (id)preloadEnterTimestamp:(id)a0;
- (void)triggerObserverIfNeed;
- (void)monitorLoadDuration:(id)a0 bizParams:(id)a1;
- (unsigned long long)stageWithItemId:(id)a0;
- (id)currentMaxDuration;
- (id)currentMaxPreloadEnterDuration;
- (BOOL)checkTimeStampValid:(id)a0;
- (BOOL)checkPreLoadEnterTimeStampValid:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)dealloc;
- (void)disableService;

@end
