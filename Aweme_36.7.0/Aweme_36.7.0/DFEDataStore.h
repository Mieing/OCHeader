@class NSString, FMDatabaseQueue, NSMutableDictionary;

@interface DFEDataStore : NSObject {
    FMDatabaseQueue *fmdb;
    NSMutableDictionary *parameters;
}

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *launchId;
@property (copy, nonatomic) id /* block */ onError;

- (void)queryEvents:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)startWithPath:(id)a0;
- (void)_writeData:(id)a0 toDatabase:(id)a1;
- (void)vaccum;
- (void)batchEvents:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addEvent:(id)a0;
- (BOOL)_init;
- (id)executeQuery:(id)a0;
- (BOOL)executeUpdate:(id)a0;
- (void)removeEvents:(id)a0;
- (unsigned long long)count;

@end
