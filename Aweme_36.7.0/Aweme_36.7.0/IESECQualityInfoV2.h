@class NSMutableDictionary, CADisplayLink, NSString, NSNumber;

@interface IESECQualityInfoV2 : NSObject

@property (retain, nonatomic) NSMutableDictionary *extra;
@property (retain) NSMutableDictionary *tmpExtra;
@property (copy, nonatomic) NSNumber *initial;
@property (copy, nonatomic) NSNumber *reqStart;
@property (copy, nonatomic) NSNumber *reqEnd;
@property (copy, nonatomic) NSNumber *firstPaint;
@property (copy, nonatomic) NSNumber *renderStart;
@property (copy) NSNumber *renderEnd;
@property long long last;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSString *btmID;

- (void)expandExtra:(id)a0;
- (void)traceInitial:(id)a0;
- (void)traceFirstPaint:(id)a0;
- (void)traceReqStart:(id)a0;
- (void)traceRenderStart:(id)a0;
- (void)traceReqEnd:(id)a0;
- (void)reportFMP;
- (void)traceRenderEnd:(id /* block */)a0;
- (id)initWithEventName:(id)a0 btmID:(id)a1;
- (id)expandDuration;
- (void)traceRenderEndUseMediaTiming:(id /* block */)a0;
- (void)expandDuration:(id)a0 time:(id)a1;
- (id)perfRecordsIsSync:(BOOL)a0;
- (void)reportFMPIsSync:(BOOL)a0;
- (id)syncPerfRecords;
- (id)perfRecords;
- (void)expandDurationDict:(id)a0;
- (void)traceRenderEndNow:(id)a0;
- (void)syncReportFMP;
- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;

@end
