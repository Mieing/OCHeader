@class NSString, NSMutableDictionary, DIRSHistoricalEventDispatcher;

@interface DIRSBDTrackerAdapter : NSObject <HistoricalDatabase> {
    NSMutableDictionary *storages;
}

@property (weak, nonatomic) DIRSHistoricalEventDispatcher *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storageInfo;
+ (BOOL)isAvailableForAppId:(id)a0;
+ (id)databaseDir;

- (void)queryEvents:(id)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)removeEvents:(id)a0;
- (unsigned long long)count;

@end
