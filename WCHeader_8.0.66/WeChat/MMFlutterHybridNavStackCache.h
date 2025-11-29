@class NSString, NSMutableDictionary;

@interface MMFlutterHybridNavStackCache : MMRootService <MMServiceProtocol> {
    NSMutableDictionary *_stackCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (id)ofEngineGroupId:(id)a0;
- (void)removeByEngineGroupId:(id)a0;
- (void).cxx_destruct;

@end
