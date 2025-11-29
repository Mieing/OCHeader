@class BDUGSyncDBTransactionV4, NSObject;
@protocol OS_dispatch_queue;

@interface BDUGSyncDBQueueV4 : NSObject

@property (retain, nonatomic) BDUGSyncDBTransactionV4 *dbTransaction;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;

- (id)initWithDBTransaction:(id)a0;
- (void).cxx_destruct;
- (BOOL)inTransaction:(id /* block */)a0;

@end
