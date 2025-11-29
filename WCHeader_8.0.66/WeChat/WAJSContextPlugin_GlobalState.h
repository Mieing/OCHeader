@class NSMutableDictionary;

@interface WAJSContextPlugin_GlobalState : WAJSContextPluginBase

@property (retain, nonatomic) NSMutableDictionary *dicState;

- (id)init;
- (void)setGlobalStateWithKey:(id)a0 value:(id)a1;
- (id)getGlobalStateValueWithKey:(id)a0;
- (void).cxx_destruct;

@end
