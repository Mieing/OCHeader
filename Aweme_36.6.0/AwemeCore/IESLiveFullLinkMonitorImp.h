@class NSString, NSDictionary, HTSLiveUser;
@protocol IESLiveRoomService, IESLiveMonitor;

@interface IESLiveFullLinkMonitorImp : NSObject <IESLiveFullLinkMonitor>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (copy, nonatomic) NSString *networkStatusString;
@property (nonatomic) long long applicationState;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSLiveUser *currentLoginUser;
@property (nonatomic) unsigned long long roleType;
@property (copy, nonatomic) NSDictionary *monitorTrack;
@property (copy, nonatomic) NSString *deviceRecordScore;
@property (copy, nonatomic) NSString *deviceOverallScore;
@property (nonatomic) BOOL isResumeLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)appResignActive;
- (void)trackEventWith:(id)a0;
- (id)deviceScore;
- (void)appDidActive;
- (void)monitorWithEventType:(unsigned long long)a0 eventModule:(unsigned long long)a1 serviceName:(id)a2 extra:(id)a3;
- (void)monitorWithEventType:(unsigned long long)a0 eventModule:(unsigned long long)a1 serviceName:(id)a2 extra:(id)a3 metric:(id)a4;
- (void)monitorEventType:(id)a0 eventModule:(id)a1 serviceName:(id)a2 extra:(id)a3 metric:(id)a4;
- (void)monitorWithEventType:(unsigned long long)a0 eventModule:(unsigned long long)a1 serviceName:(id)a2 category:(id)a3 metric:(id)a4 extra:(id)a5;
- (void)traceWithProduct:(unsigned long long)a0 businessType:(unsigned long long)a1 traceName:(id)a2 step:(id)a3 errorCode:(long long)a4 errorMessage:(id)a5 index:(id)a6 extra:(id)a7;
- (void)traceWithProductName:(id)a0 businessTypeName:(id)a1 traceName:(id)a2 step:(id)a3 errorCode:(long long)a4 errorMessage:(id)a5 index:(id)a6 extra:(id)a7;
- (id)initWithRoomModel:(id)a0 roleType:(unsigned long long)a1;
- (id)composeFinalReportInfoWithEventType:(unsigned long long)a0 eventModule:(unsigned long long)a1 eventKey:(id)a2 extra:(id)a3;
- (BOOL)shouldUseSlardarWithModule:(unsigned long long)a0;
- (id)makeAllToStringValue:(id)a0;
- (BOOL)shouldUseTraceWithModule:(unsigned long long)a0;
- (id)traceProductIDWithModule:(unsigned long long)a0 shouldUseTrace:(BOOL)a1;
- (id)eventModuleStringWith:(unsigned long long)a0 useTraceModule:(BOOL)a1 shouldTraceByInput:(BOOL)a2;
- (void)monitorTrackWithParams:(id)a0 serviceName:(id)a1;
- (id)combineReportInfoWithEventType:(id)a0 eventModule:(id)a1 eventKey:(id)a2 extra:(id)a3;
- (BOOL)shouldReportSlardarWithModule:(id)a0;
- (id)validateCategoryValue:(id)a0;
- (id)eventTypeStringWith:(unsigned long long)a0;
- (id)eventModuleStringWith:(unsigned long long)a0;
- (id)traceProductIDWithProduct:(unsigned long long)a0;
- (id)traceBusinessTypeNameWithBusinessType:(unsigned long long)a0;
- (BOOL)p_shouldBlockTraceWithBusinessType:(id)a0;
- (BOOL)p_shouldBlockTraceWithEventType:(id)a0;
- (BOOL)p_shouldBlockTraceWithStepType:(id)a0;
- (id)networkStatusStringWith:(long long)a0;
- (BOOL)shouldUseMonitorTEATraceWithModule:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;
- (void)networkStatusChanged:(id)a0;

@end
