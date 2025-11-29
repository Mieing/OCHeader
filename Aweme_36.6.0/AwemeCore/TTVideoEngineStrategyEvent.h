@class NSMutableDictionary;

@interface TTVideoEngineStrategyEvent : NSObject {
    NSMutableDictionary *_vidDict;
    NSMutableDictionary *_noVidDict;
}

- (id)addDictIfAbsent:(id)a0 ForKey:(id)a1;
- (id)getLogData:(id)a0;
- (void)removeLogData:(id)a0;
- (id)convertCounterDict:(id)a0;
- (id)popLogData:(long long)a0 forTraceId:(id)a1;
- (void)event:(id)a0 event:(long long)a1 value:(long long)a2 info:(id)a3;
- (id)getLogDataAndPopCache:(id)a0;
- (id)getLogData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
