@class NSMutableArray;

@interface AWERecordInspirationCommonSearchHistoryManager : NSObject

@property (retain, nonatomic) NSMutableArray *searchHistory;
@property (copy, nonatomic) id /* block */ updateHistoryItemAction;

+ (id)sharedManager;

- (void)deleteSearchHistory:(id)a0;
- (void)deleteAllSearchHistory;
- (void)addOrUpdateSearchHistory:(id)a0;
- (BOOL)isValidUidStatus;
- (void)loadSearchHistory;
- (void)saveSearchHistory;
- (id)getAllSearchHistory;
- (void).cxx_destruct;
- (id)cacheKey;

@end
