@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDPSensitiveWordsDiffPatchExecutor : NSObject {
    NSObject<OS_dispatch_queue> *_checkWordQueue;
    NSMutableDictionary *_diffPatchContext;
}

- (id)initWithCheckWordQueue:(id)a0;
- (void)excuteDiffPatchWithData:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
