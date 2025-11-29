@class TTHttpTask, NSString;

@interface ALMOwnPlayerVideoEngineTTNet : NSObject <TTVideoEngineNetClient>

@property (retain, nonatomic) TTHttpTask *runningTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configTaskWithURL:(id)a0 params:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
- (void)configTaskWithURL:(id)a0 completion:(id /* block */)a1;
- (void)invalidAndCancel;
- (void).cxx_destruct;
- (void)resume;
- (void)cancel;

@end
