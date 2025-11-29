@class NSArray, NSString, IESLiveFunctionSquareSearchListModel, IESLiveFunctionSquareSearchApi;

@interface IESLiveFunctionSquareSearchViewModel : NSObject

@property (copy, nonatomic) NSArray *historyList;
@property (copy, nonatomic) NSArray *resultList;
@property (retain, nonatomic) IESLiveFunctionSquareSearchListModel *searchResultListModel;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) IESLiveFunctionSquareSearchApi *api;
@property (readonly, nonatomic) BOOL isSearchMode;
@property (readonly, nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSArray *gameList;
@property (retain, nonatomic) NSArray *localItems;

- (void)saveSearchHistoryResultWithKeyword:(id)a0;
- (void)deleteHistoryItemWithKeyWord:(id)a0;
- (id)initWithScene:(unsigned long long)a0 diContext:(id)a1;
- (void)refreshLocalAndServerDataWithKeyword:(id)a0 callback:(id /* block */)a1;
- (void)refreshLocalSearchDataControllerWithKeyword:(id)a0 callback:(id /* block */)a1;
- (void)refreshSearchDataControllerWithKeyword:(id)a0 callback:(id /* block */)a1;
- (void)updateIsSearchMode:(BOOL)a0;
- (void)clearSearchContent;
- (id)getSearchListInDisk;
- (void)saveSearchListInDiskWithSearchList:(id)a0;
- (id)getFunctionSquareSearchBindUidKey;
- (id)assembleResultCellRowNodeWithModel:(id)a0;
- (void)trackAnchorInteractiveExtensionSearch:(id)a0;
- (void).cxx_destruct;
- (void)deleteAllHistory;

@end
