@class NSString, NSMutableDictionary;

@interface IESGCPLinkDurationManager : NSObject <IESGCPLinkDurationService>

@property (retain, nonatomic) NSMutableDictionary *linkDurationInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTraceWithTrackId:(id)a0;
- (BOOL)verifyIfTraceStartedWithTrackId:(id)a0;
- (void)traceEventStart:(id)a0 time:(id)a1 trackId:(id)a2;
- (void)traceEventEnd:(id)a0 time:(id)a1 trackId:(id)a2 completion:(id /* block */)a3;
- (void)traceViewRenderEnd:(id)a0 trackId:(id)a1 completion:(id /* block */)a2;
- (void)traceEventStamp:(id)a0 time:(id)a1 trackId:(id)a2;
- (void)stopTraceWithTrackId:(id)a0;
- (id)acquireTriggerWithTrackId:(id)a0;
- (id)acquireEventDuration:(id)a0 withTrackId:(id)a1;
- (id)durationInTimeStampStart:(id)a0 toStampEnd:(id)a1 trackId:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
