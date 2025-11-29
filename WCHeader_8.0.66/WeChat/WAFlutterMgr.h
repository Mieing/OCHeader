@class NSString, NSMutableArray;

@interface WAFlutterMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *skylineRuntimeArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)ensureEngineGroup;
- (id)makeSkylineEngine:(id)a0;
- (void)destroySkylineEngine:(id)a0;
- (void)addSkylineRuntime:(id)a0;
- (void)removeSkylineRuntime:(id)a0;
- (void).cxx_destruct;

@end
