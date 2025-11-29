@class NSArray, NSMutableSet, NSString;

@interface MMFinderLiveHistoryMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSArray *dataItems;
@property (retain, nonatomic) NSMutableSet *dataItemsSet;
@property (nonatomic) long long expireWatchHistoryDuration;
@property (nonatomic) unsigned long long capacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)addLiveHistoryDataItem:(id)a0;
- (void)trimCount;
- (void)removeLiveHistoryDataItem:(id)a0;
- (void)updateHistoryItem:(id)a0;
- (void)checkAvailableHistoryLive:(id /* block */)a0;
- (void)removeAllLiveHistoryDataItems;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearDataWithLiveId:(unsigned long long)a0;
- (void).cxx_destruct;

@end
