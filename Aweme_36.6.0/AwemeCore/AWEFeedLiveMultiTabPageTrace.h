@class NSString, NSMutableDictionary;

@interface AWEFeedLiveMultiTabPageTrace : NSObject

@property (nonatomic) BOOL disableTrace;
@property (retain, nonatomic) NSMutableDictionary *traceTimeInfo;
@property (nonatomic) long long tabID;
@property (copy, nonatomic) NSString *tabName;

- (void)reportTraceInfo;
- (void)reportInfoWithStageEvent:(id)a0 startIndex:(long long)a1 endIndex:(long long)a2 traceInfo:(id)a3 event:(id)a4;
- (void)traceFeedEnterStage:(long long)a0;
- (void)traceFeedRequestTime:(double)a0 params:(id)a1;
- (void).cxx_destruct;

@end
