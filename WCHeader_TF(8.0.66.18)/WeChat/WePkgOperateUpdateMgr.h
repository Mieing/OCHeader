@class NSObject;
@protocol OS_dispatch_queue;

@interface WePkgOperateUpdateMgr : MMObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)init;
- (BOOL)operateUpdateAtomicPart:(id)a0 RegularConfig:(id)a1 VersionChanged:(BOOL *)a2;
- (BOOL)operateUpdateNonAtomicPart:(id)a0 RegularConfig:(id)a1 VersionChanged:(BOOL *)a2;
- (void)operateUpdateForPkgId:(id)a0 AtomicPart:(BOOL)a1 NonAtomicPart:(BOOL)a2 completeBlock:(id /* block */)a3;
- (void)performBlockOnSerialQueue:(id /* block */)a0;
- (void)mainQueueCallCompleteBlock:(id /* block */)a0 withResult:(BOOL)a1;
- (void).cxx_destruct;

@end
