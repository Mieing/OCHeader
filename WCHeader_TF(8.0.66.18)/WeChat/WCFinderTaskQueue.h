@class NSString, NSHashTable;

@interface WCFinderTaskQueue : NSObject <WCFinderTaskWrapperDelegate>

@property (weak, nonatomic) id owner;
@property (retain, nonatomic) NSHashTable *tasks;
@property (nonatomic) BOOL needWakeup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOwner:(id)a0;
- (id)init;
- (BOOL)hasTask:(id)a0;
- (id)taskByName:(id)a0;
- (void)executeTask:(id)a0;
- (void)executeTask:(id)a0 builder:(id /* block */)a1;
- (void)executeImpediately;
- (void)tryWakeup;
- (void)tryNextTask;
- (void)runTask:(id)a0;
- (void)cancelAll;
- (void)onTaskFinish:(id)a0;
- (void)onTaskFullFill:(id)a0 finishBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
