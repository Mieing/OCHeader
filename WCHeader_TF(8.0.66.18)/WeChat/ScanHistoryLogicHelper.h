@class NSMutableDictionary, NSMutableArray;

@interface ScanHistoryLogicHelper : NSObject {
    NSMutableDictionary *_dicItems;
    NSMutableArray *_arrSortedKeyByTime;
    NSMutableArray *_arrSortedItems;
}

+ (BOOL)isExistScanHistory;
+ (id)GetCachePath;

- (id)init;
- (void)LoadDataFromFile;
- (void)SaveDataToFile;
- (void)addItem:(id)a0 withDataID:(id)a1 andType:(unsigned long long)a2;
- (void)removeItem:(unsigned long long)a0;
- (void)cleanAllData;
- (unsigned long long)historyCount;
- (id)arrHistoryItems;
- (void).cxx_destruct;

@end
