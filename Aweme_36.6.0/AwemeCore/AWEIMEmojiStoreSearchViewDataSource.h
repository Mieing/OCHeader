@class AWEIMEmojiResourcesListSearchResponseModel, AWEIMEmojiStoreSearchResultDataSource, AWEIMEmojiStoreSearchResultView;
@protocol IESIMHttpTask;

@interface AWEIMEmojiStoreSearchViewDataSource : NSObject

@property (weak, nonatomic) AWEIMEmojiStoreSearchResultView *searchResultView;
@property (retain, nonatomic) id<IESIMHttpTask> requestingHttpTask;
@property (retain, nonatomic) AWEIMEmojiResourcesListSearchResponseModel *model;
@property (retain, nonatomic) AWEIMEmojiStoreSearchResultDataSource *searchResult;
@property (nonatomic) BOOL isDataRefreshed;
@property (nonatomic) BOOL shouldShowEmptyView;
@property (nonatomic) BOOL shouldShowNetErrorView;
@property (nonatomic) BOOL isSearchingEmptyString;

- (id)initWithSearchResultView:(id)a0;
- (void)fetchDataWithSearchingString:(id)a0 isLoadMore:(BOOL)a1;
- (void).cxx_destruct;

@end
