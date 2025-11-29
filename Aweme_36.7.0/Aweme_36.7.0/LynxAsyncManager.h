@class NSString, LynxAsyncServiceQueue, NSCache;

@interface LynxAsyncManager : NSObject <NSCacheDelegate, LynxAsyncManagerProtocol> {
    LynxAsyncServiceQueue *_preCreateOperationQueue;
    LynxAsyncServiceQueue *_preLayoutOperationQueue;
    NSCache *_preCreateCache;
    NSCache *_preLayoutCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearPreCreateCache;
- (void)preCreateAndLayout:(id)a0 createOperator:(id /* block */)a1 viewCreator:(id /* block */)a2 layoutOperator:(id /* block */)a3 finishedCallback:(id /* block */)a4;
- (id)initWithBuilderBlock:(id /* block */)a0;
- (void)preLayout:(id)a0 container:(id)a1 layoutOperator:(id /* block */)a2 finishedCallback:(id /* block */)a3;
- (void)preCreate:(id)a0 createOperator:(id /* block */)a1 viewCreator:(id /* block */)a2 finishedCallback:(id /* block */)a3;
- (id)getLynxViewFromPreLayoutCache:(id)a0 shouldRemove:(BOOL)a1;
- (id)getLynxViewFromPreCreateCache:(id)a0 waitUntilDone:(BOOL)a1;
- (id)getLynxViewFromPreCreateCache:(id)a0 shouldRemove:(BOOL)a1;
- (id)getLynxViewFromPreLayoutCache:(id)a0 waitUntilDone:(BOOL)a1;
- (id)getLynxViewFromPreCreateCache:(id)a0;
- (id)getLynxViewFromPreLayoutCache:(id)a0;
- (id)removeLynxViewFromPreCreateCache:(id)a0;
- (id)removeLynxViewFromPreLayoutCache:(id)a0;
- (id)processRenderFromCache:(id)a0;
- (void)clearPreLayoutCache;
- (void).cxx_destruct;
- (void)clear;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)dealloc;

@end
