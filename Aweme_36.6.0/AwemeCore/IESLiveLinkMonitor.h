@class NSArray, IESLiveInteractStreamFullLinkMonitor, NSString;
@protocol IESLiveLinkReporterDataSource;

@interface IESLiveLinkMonitor : NSObject <IESLiveLinkReporterProtocol> {
    id<IESLiveLinkReporterDataSource> _dataSource;
}

@property (copy, nonatomic) NSArray *blockList;
@property (nonatomic) BOOL useExtraParams;
@property (copy, nonatomic) id /* block */ interactLogCallback;
@property (retain, nonatomic) IESLiveInteractStreamFullLinkMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)logWithEventName:(id)a0 isError:(BOOL)a1 fileName:(const char *)a2 functionSelector:(SEL)a3 line:(int)a4 extra:(id)a5 buildExtraParams:(BOOL)a6;
- (id)buildExtraParams:(id)a0;
- (void)monitorWithEventName:(id)a0 eventType:(unsigned long long)a1 extra:(id)a2 buildExtraParams:(BOOL)a3;
- (void)traceWithEventName:(id)a0 traceEventType:(unsigned long long)a1 errorCode:(long long)a2 errorMessage:(id)a3 extra:(id)a4 buildExtraParams:(BOOL)a5;
- (id)traceEventNameWithEventType:(unsigned long long)a0;
- (id)businessCommonTrackParams;
- (void)logWithEventName:(id)a0 isError:(BOOL)a1 fileName:(const char *)a2 functionSelector:(SEL)a3 line:(int)a4 extra:(id)a5;
- (void)traceWithEventName:(id)a0 traceEventType:(unsigned long long)a1 errorCode:(long long)a2 errorMessage:(id)a3 extra:(id)a4;
- (void)monitorWithEventName:(id)a0 eventType:(unsigned long long)a1 extra:(id)a2;
- (void)monitorAudioKeyAPICallWithEventName:(id)a0 extra:(id)a1;
- (void)liveCoreLogWithExtra:(id)a0;
- (void)logMonitorWithEventName:(id)a0 eventType:(unsigned long long)a1 isError:(BOOL)a2 fileName:(const char *)a3 functionSelector:(SEL)a4 line:(int)a5 extra:(id)a6;
- (void)logTraceWithEventName:(id)a0 traceEventType:(unsigned long long)a1 errorCode:(long long)a2 errorMessage:(id)a3 fileName:(const char *)a4 functionSelector:(SEL)a5 line:(int)a6 extra:(id)a7;
- (void)logAllWithEventName:(id)a0 eventType:(unsigned long long)a1 traceEventType:(unsigned long long)a2 errorCode:(long long)a3 errorMessage:(id)a4 fileName:(const char *)a5 functionSelector:(SEL)a6 line:(int)a7 extra:(id)a8;
- (void)monitorTraceWithEventName:(id)a0 eventType:(unsigned long long)a1 traceEventType:(unsigned long long)a2 errorCode:(long long)a3 errorMessage:(id)a4 extra:(id)a5;
- (void).cxx_destruct;
- (id)dataSource;
- (id)init;
- (void)setDataSource:(id)a0;

@end
