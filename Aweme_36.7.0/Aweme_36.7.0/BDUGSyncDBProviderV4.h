@class BDUGSyncDBQueueV4;

@interface BDUGSyncDBProviderV4 : NSObject

@property (retain, nonatomic) BDUGSyncDBQueueV4 *dbQueue;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)init;
- (BOOL)inTransaction:(id /* block */)a0;

@end
