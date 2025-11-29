@class NSArray, NSMutableArray, NSString;
@protocol ACCTextInputUserServiceProtocol;

@interface ACCEditTagsUserPickerViewController : ACCTagsItemPickerViewController

@property (retain, nonatomic) id<ACCTextInputUserServiceProtocol> userService;
@property (retain, nonatomic) NSMutableArray *users;
@property (copy, nonatomic) id /* block */ searchCompletion;
@property (copy, nonatomic) id /* block */ loadMoreCompletion;
@property (nonatomic) BOOL isFromLoadMore;
@property (nonatomic) BOOL didFetchRecommendUserSucceedOnceFlag;
@property (copy, nonatomic) NSArray *recommendedUsers;
@property (copy, nonatomic) NSString *currentResultKeyword;

- (void)loadMoreWithKeyword:(id)a0 completion:(id /* block */)a1;
- (void)fetchRecommendData;
- (void)searchWithKeyword:(id)a0 completion:(id /* block */)a1;
- (id)tagTypeString;
- (id)tagModelForIndexPath:(id)a0;
- (id)emptyResultText;
- (BOOL)needNoMoreFooterText;
- (id)searchBarPlaceHolder;
- (void)restoreRecommendData;
- (id)itemTrackerParamsForItemAtIndexPath:(id)a0 isSelect:(BOOL)a1;
- (void)p_showUserListWithUsers:(id)a0 andWithKeyword:(id)a1;
- (void)handleUserDataFetchSucceed:(id)a0 keyword:(id)a1 fromLoadMore:(BOOL)a2;
- (BOOL)needCreateCustomTagFooter;
- (void).cxx_destruct;
- (id)dataSource;
- (long long)type;
- (Class)cellClass;
- (id)itemTitle;
- (long long)indexOfItem:(id)a0;
- (id)cellIdentifier;
- (double)cellHeight;

@end
