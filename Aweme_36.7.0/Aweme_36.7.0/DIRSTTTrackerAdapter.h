@class NSString, DIRSFMDatabaseQueue, DIRSHistoricalEventDispatcher;

@interface DIRSTTTrackerAdapter : NSObject <HistoricalDatabase> {
    DIRSFMDatabaseQueue *fmdb;
}

@property (weak, nonatomic) DIRSHistoricalEventDispatcher *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAvailableForAppId:(id)a0;
+ (id)databasePath;

- (void)queryEvents:(id)a0 usingBlock:(id /* block */)a1;
- (id)formatLaunch:(id)a0;
- (id)formatTerminate:(id)a0;
- (void).cxx_destruct;
- (id)database;
- (void)removeEvents:(id)a0;
- (unsigned long long)count;

@end
