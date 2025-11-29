@class NSString, NSData, MMFinderLiveTaskId;
@protocol MMFinderLiveMusicSettingSearchDelegate;

@interface MMFinderLiveMusicSettingSearchViewModel : NSObject <UISearchBarDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) BOOL beginSearching;
@property (copy, nonatomic) NSString *currentSearchText;
@property (retain, nonatomic) NSData *lastBuffer;
@property (weak, nonatomic) id<MMFinderLiveMusicSettingSearchDelegate> searchDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)doSearchWithText:(id)a0;
- (void)innerSearchWithText:(id)a0 lastBuffer:(id)a1;
- (void)onSearchResultReturnWithSearchText:(id)a0 resultCode:(int)a1 resultArray:(id)a2 conintueFlag:(unsigned int)a3 preLastBuffer:(id)a4 newLastBuffer:(id)a5;
- (BOOL)continueSearch;
- (void).cxx_destruct;

@end
