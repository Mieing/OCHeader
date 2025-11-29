@interface GameInteractContentServer : GCBaseServer

- (void)batchGetContentInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)quickInteractWithRequest:(id)a0 completionBlock:(id /* block */)a1;

@end
