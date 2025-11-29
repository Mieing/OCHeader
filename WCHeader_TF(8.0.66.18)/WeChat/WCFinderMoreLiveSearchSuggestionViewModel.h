@class NSString, NSMutableArray, WCFinderSearchSuggestionCGI;
@protocol WCFinderMoreLiveSearchSuggestionViewModelDelegate;

@interface WCFinderMoreLiveSearchSuggestionViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *allSearchHistory;
@property (copy, nonatomic) NSString *searchKeyWord;
@property (retain, nonatomic) WCFinderSearchSuggestionCGI *currentCgi;
@property (weak, nonatomic) id<WCFinderMoreLiveSearchSuggestionViewModelDelegate> delegate;

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
