@class NSString, NSMutableArray, WCFinderSearchSuggestionCGI;
@protocol WCFinderSearchSuggestionViewModelDelegate;

@interface WCFinderSearchSuggestionViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *allSearchHistory;
@property (copy, nonatomic) NSString *searchKeyWord;
@property (retain, nonatomic) WCFinderSearchSuggestionCGI *currentCgi;
@property (weak, nonatomic) id<WCFinderSearchSuggestionViewModelDelegate> delegate;

- (void)loadLatestHistoryData;
- (long long)numberOfRows;
- (id)searchSuggestionAtIndex:(long long)a0;
- (int)getSearchScene;
- (void)fetchSuggestion:(id)a0;
- (void)cancelFetchSuggestion;
- (void)preFetchProcess:(id)a0;
- (void)throttleFetchProcess;
- (void)clearAllCurrentData;
- (void).cxx_destruct;

@end
