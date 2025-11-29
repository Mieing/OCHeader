@class NSMutableArray;

@interface WCFinderHotSpotHistorySectionModel : NSObject

@property (retain, nonatomic) NSMutableArray *historyRecords;

- (BOOL)isDataEmpty;
- (unsigned long long)dataCount;
- (id)historyRecordAtIndex:(unsigned long long)a0;
- (void)loadData;
- (void).cxx_destruct;

@end
