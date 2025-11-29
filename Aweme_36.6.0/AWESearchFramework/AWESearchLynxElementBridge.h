@class NSMapTable;

@interface AWESearchLynxElementBridge : NSObject

@property (retain, nonatomic) NSMapTable *lynxContainerElementTable;
@property (retain, nonatomic) NSMapTable *lynxContainerTable;

+ (BOOL)searchLynxEngineShouldUseSearchDynamic;
+ (id)shareInstance;

- (id)elementWithContainerID:(id)a0;
- (void)registElementView:(id)a0 withContainerID:(id)a1;
- (void)clearElementTable;
- (void)registContainer:(id)a0 withContainerID:(id)a1;
- (id)containerWithID:(id)a0;
- (void)registElementView:(id)a0 withSessionId:(id)a1 withContainerId:(id)a2;
- (id)awemeModelForSessionId:(id)a0 withSearchModelIndex:(id)a1 cacheKey:(id)a2 containerId:(id)a3;
- (void).cxx_destruct;

@end
