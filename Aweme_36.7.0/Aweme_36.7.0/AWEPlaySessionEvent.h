@class NSMutableDictionary;

@interface AWEPlaySessionEvent : NSObject {
    NSMutableDictionary *_params;
    long long _state;
}

- (id)getParams;
- (id)getDiffParamsWithKey:(id)a0 state:(long long)a1;
- (void)updateParamsInState:(long long)a0 params:(id)a1;
- (id)mergeOthersParams:(id)a0;
- (void)processPlaySessionEvents;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (id)reportMetrics;

@end
