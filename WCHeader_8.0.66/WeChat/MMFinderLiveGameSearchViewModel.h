@class NSString, NSMutableArray, MMFinderLiveTaskId;
@protocol MMFinderLiveGameSearchDelegate;

@interface MMFinderLiveGameSearchViewModel : NSObject <UISearchBarDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) BOOL beginSearching;
@property (copy, nonatomic) NSString *currentSearchText;
@property (nonatomic) BOOL hasNext;
@property (retain, nonatomic) NSString *nextOffset;
@property (copy, nonatomic) NSMutableArray *mostRecentlyPlayGames;
@property (retain, nonatomic) NSMutableArray *searchGames;
@property (weak, nonatomic) id<MMFinderLiveGameSearchDelegate> searchDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)getMostRecentlyPlayGames;
- (void)doSearchWithText:(id)a0;
- (void)innerSearchWithText:(id)a0 nextOffset:(id)a1;
- (void)onSearchResultReturnWithSearchText:(id)a0 resultArray:(id)a1 hasNext:(BOOL)a2 nextOffset:(id)a3;
- (void)appendSearchResults:(id)a0;
- (BOOL)continueSearch;
- (void)resetSearchResults:(id)a0;
- (BOOL)hasSearchResult;
- (id)getSearchResult;
- (void).cxx_destruct;

@end
