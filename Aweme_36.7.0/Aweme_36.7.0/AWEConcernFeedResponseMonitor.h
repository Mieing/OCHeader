@class NSMutableDictionary;

@interface AWEConcernFeedResponseMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *followFeedMonitorParams;

- (void)appendParams:(id)a0;
- (void)trackFollowFeedResponse:(id)a0 error:(id)a1 dataList:(id)a2;
- (void)appendParamKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
