@class NSString, NSMutableArray, WCFinderBatchModContactTypeTask;
@protocol WCFinderAuthorityListViewModelSearchDelegate, WCFinderAuthorityListViewModelDelegate;

@interface WCFinderOutsideFriendViewModel : NSObject <WCFinderBatchModContactTypeTaskDelegate, WCFinderAuthorityListViewModelProtocol>

@property (retain, nonatomic) NSMutableArray *contacts;
@property (retain, nonatomic) WCFinderBatchModContactTypeTask *batchContactTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WCFinderAuthorityListViewModelDelegate> delegate;
@property (weak, nonatomic) id<WCFinderAuthorityListViewModelSearchDelegate> searchDelegate;

+ (BOOL)isMyFriend:(id)a0;
+ (id)convertContact:(id)a0;

- (void)requestLoadFirstPageData;
- (void)batchConfigAddItems:(id)a0 delItems:(id)a1;
- (void)finderBatchModContactTypeTask:(id)a0 finishWithSuccessNames:(id)a1 failedNames:(id)a2 allSuccess:(BOOL)a3;
- (id)guideTips;
- (id)emptyTips;
- (id)titleTips;
- (id)accessibilityLabelText;
- (BOOL)hasMoreData;
- (void)searchWithKeyword:(id)a0;
- (id)allContacts;
- (BOOL)showAddContactButton;
- (BOOL)showSearchBar;
- (void).cxx_destruct;

@end
