@class MemoryMappedKV, NSMutableArray, NSString;
@protocol RingToneSearchViewModelDelegate;

@interface RingToneSearchHistoryViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *allSearchHistory;
@property (retain, nonatomic) MemoryMappedKV *slotKv;
@property (copy, nonatomic) NSString *searchKeyWord;
@property (retain, nonatomic) NSMutableArray *searchTextArray;
@property (weak, nonatomic) id<RingToneSearchViewModelDelegate> searchDelegate;

- (id)init;
- (void)dealloc;
- (id)getHistoryMMKV;
- (id)getLocalRingToneSearchHistory;
- (void)updateLocalRingToneSearchHistory:(id)a0;
- (void)deleteAllSearchRecord;
- (void)deleteSearchRecord:(id)a0;
- (void)addSearchContent:(id)a0;
- (void)initHistorySearchMMKV;
- (void)loadLatestHistoryData;
- (long long)numberOfRows;
- (id)searchSuggestionAtIndex:(long long)a0;
- (void)fetchSuggestion:(id)a0;
- (void)cancelFetchSuggestion;
- (void)preFetchProcess:(id)a0;
- (void)throttleFetchProcess;
- (void)clearAllCurrentData;
- (void).cxx_destruct;

@end
