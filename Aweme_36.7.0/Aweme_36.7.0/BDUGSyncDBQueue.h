@class BDUGSyncDBTransaction, NSObject;
@protocol OS_dispatch_queue;

@interface BDUGSyncDBQueue : NSObject

@property (retain, nonatomic) BDUGSyncDBTransaction *dbTransaction;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;

- (id)initWithDBTransaction:(id)a0;
- (void).cxx_destruct;
- (BOOL)inTransaction:(id /* block */)a0;

@end
