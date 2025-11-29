@class NSString, NSMutableArray, NSMutableDictionary;

@interface TMPipeline : NSObject <TMSystem>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableArray *systems;
@property (retain, nonatomic) NSMutableDictionary *systemMap;
@property (retain, nonatomic) NSMutableDictionary *missParentSystemMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__pipelines;
+ (id)pipelineForType:(unsigned long long)a0;
+ (id)allPipelines;

- (void)addSystem:(id)a0 parent:(Class)a1;
- (void)addSystem:(id)a0 parent:(Class)a1 index:(unsigned long long)a2;
- (BOOL)preInvoke:(id)a0;
- (void)systemPreInvoke:(id)a0 entity:(id)a1;
- (BOOL)postInvoke:(id)a0;
- (void)systemPostInvoke:(id)a0 entity:(id)a1;
- (void)trackPipelineEvent:(id)a0;
- (BOOL)hasSystem:(id)a0;
- (void)replaceSystem:(Class)a0 with:(id)a1;
- (void)removeSystem:(Class)a0;
- (void).cxx_destruct;
- (id)name;
- (void)addSystem:(id)a0;

@end
