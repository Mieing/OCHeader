@class NSObject, NSString, EAIEdgeAIImpl;
@protocol OS_dispatch_queue;

@interface EAIEdgeAI : NSObject <EAIEdgeAIInterface>

@property (retain, nonatomic) EAIEdgeAIImpl *impl;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEvent:(id)a0 params:(id)a1;
- (void)run:(id)a0 callback:(id /* block */)a1;
- (void)addDatasource:(id)a0;
- (void)removeDatasource:(id)a0;
- (void)query:(id)a0 callback:(id /* block */)a1;
- (void)unsubscribe:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)subscribe:(id)a0 callback:(id /* block */)a1;
- (id)initWithRegistry:(id)a0;

@end
