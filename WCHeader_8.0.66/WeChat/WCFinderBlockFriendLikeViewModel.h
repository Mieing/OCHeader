@class NSString, NSMutableArray, WCFinderBatchModContactTypeTask;
@protocol WCFinderAuthorityListViewModelSearchDelegate, WCFinderAuthorityListViewModelDelegate;

@interface WCFinderBlockFriendLikeViewModel : NSObject <WCFinderBatchModContactTypeTaskDelegate, WCFinderAuthorityListViewModelProtocol>

@property (retain, nonatomic) NSMutableArray *contacts;
@property (retain, nonatomic) WCFinderBatchModContactTypeTask *batchContactTask;
@property (nonatomic) BOOL hasAddedBlockFriends;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WCFinderAuthorityListViewModelDelegate> delegate;
@property (weak, nonatomic) id<WCFinderAuthorityListViewModelSearchDelegate> searchDelegate;

+ (id)convertContact:(id)a0;

- (void)requestLoadFirstPageData;
- (void)requestLoadDataFromServer;
- (void)requestLoadFirstPageDataWithDoneBlock:(id /* block */)a0;
- (void)requestLoadNextPageData;
- (void)batchConfigAddItems:(id)a0 delItems:(id)a1;
- (void)finderBatchModContactTypeTask:(id)a0 finishWithSuccessNames:(id)a1 failedNames:(id)a2 allSuccess:(BOOL)a3;
- (id)guideTips;
- (id)emptyTips;
- (id)titleTips;
- (BOOL)hasMoreData;
- (void)searchWithKeyword:(id)a0;
- (id)allContacts;
- (BOOL)showAddContactButton;
- (BOOL)showSearchBar;
- (void)onPop;
- (id)accessibilityLabelText;
- (void).cxx_destruct;

@end
