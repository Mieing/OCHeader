@class NSMutableDictionary;

@interface IESGCPLoadPerfManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *traceDict;

+ (id)sharedInstance;

- (id)startTraceEvent:(id)a0 enterFrom:(id)a1;
- (void)addExtraParams:(id)a0 trackID:(id)a1;
- (void)endLoadWithKind:(id)a0 trackID:(id)a1;
- (void)beginLoadWithKind:(id)a0 trackID:(id)a1;
- (id)startTraceEvent:(id)a0 startTime:(double)a1 enterFrom:(id)a2;
- (void)beginLoadWithCustom:(id)a0 trackID:(id)a1;
- (void)endLoadWithCustom:(id)a0 trackID:(id)a1;
- (void)calculateFMPForView:(id)a0 needFcp:(BOOL)a1 moduleName:(id)a2 trackID:(id)a3;
- (void)finishLoadEarlyExitingWithTrackID:(id)a0;
- (void)calculateFMPForView:(id)a0 beginTime:(double)a1 needFcp:(BOOL)a2 moduleName:(id)a3 trackID:(id)a4;
- (void)finishLoadNetErrorWithTrackID:(id)a0;
- (void)finishLoadWithError:(id)a0 trackID:(id)a1;
- (void)beginLoadWithCustom:(id)a0 beginTime:(double)a1 trackID:(id)a2;
- (void)beginLoadWithKind:(id)a0 beginTime:(double)a1 trackID:(id)a2;
- (void)endLoadWithKind:(id)a0 endTime:(double)a1 trackID:(id)a2;
- (void)endLoadWithCustom:(id)a0 endTime:(double)a1 trackID:(id)a2;
- (void)finishLoadTimeOutWithTrackID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
