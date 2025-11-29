@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PuzzleLatchDriver : NSObject <PuzzleLatchDriverProtocol>

@property (retain, nonatomic) NSMapTable *latchContainers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (id)sharedDriver;
+ (id)providePuzzleLatchDriverProtocol:(id)a0;

- (void)setLatchIDForContext:(id)a0 withUrl:(id)a1;
- (BOOL)preattachLynxContainer:(id)a0 forContext:(id)a1;
- (void)evaluatePrefetch:(id)a0;
- (void)injectLynxViewWithBuilder:(id)a0 context:(id)a1 business:(id)a2 url:(id)a3;
- (void)getContextWithLatchID:(id)a0 completion:(id /* block */)a1;
- (void)setLatchIDForLynxView:(id)a0 withContext:(id)a1;
- (void)stopEvaluateIfNeeded:(id)a0;
- (void)p_cleanOverdueContainer;
- (void).cxx_destruct;
- (id)init;

@end
