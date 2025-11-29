@class NSMutableDictionary;

@interface AWESearchAIGCSubDataControllerMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *params;

- (void)resetParams;
- (void)addTSForKey:(id)a0;
- (double)nowTS;
- (void)addParamsFromDictionary:(id)a0;
- (void)caculateParams;
- (void).cxx_destruct;
- (double)beginTime;
- (void)sendTrace;

@end
