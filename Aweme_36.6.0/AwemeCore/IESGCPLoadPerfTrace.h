@class NSString, NSMutableDictionary;

@interface IESGCPLoadPerfTrace : NSObject

@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *trackID;
@property (nonatomic) BOOL finishOnce;
@property (retain, nonatomic) NSMutableDictionary *allObjects;
@property (retain, nonatomic) NSMutableDictionary *customObjects;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (retain, nonatomic) NSMutableDictionary *reportParams;
@property (retain, nonatomic) NSMutableDictionary *moduleRenderParams;
@property (retain, nonatomic) NSMutableDictionary *moduleNeedFcp;
@property (nonatomic) double baseTime;

- (void)addExtraParams:(id)a0;
- (id)initWithPageName:(id)a0 startTime:(double)a1 enterFrom:(id)a2 trackID:(id)a3;
- (void)beginLoadWithKind:(id)a0 beginTime:(double)a1;
- (void)endLoadWithKind:(id)a0 endTime:(double)a1;
- (void)beginLoadWithCustom:(id)a0 beginTime:(double)a1;
- (void)endLoadWithCustom:(id)a0 endTime:(double)a1;
- (void)finishLoadWithError:(id)a0;
- (void)finishLoadWithNetError;
- (void)finishLoadEarlyExiting;
- (void)finishLoadTimeOut;
- (void)calculateFMPForView:(id)a0 beginTime:(double)a1 needFcp:(BOOL)a2 moduleName:(id)a3;
- (id)getReportParams;
- (void)reportTrackEventWithParams:(id)a0;
- (void)calculateFMPForView:(id)a0 beginTime:(double)a1 timeThreshold:(double)a2 needFcp:(BOOL)a3 moduleName:(id)a4;
- (void).cxx_destruct;
- (id)eventName;

@end
