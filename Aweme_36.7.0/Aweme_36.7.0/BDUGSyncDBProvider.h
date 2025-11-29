@class BDUGSyncDBQueue;

@interface BDUGSyncDBProvider : NSObject

@property (retain, nonatomic) BDUGSyncDBQueue *dbQueue;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)init;
- (BOOL)inTransaction:(id /* block */)a0;

@end
