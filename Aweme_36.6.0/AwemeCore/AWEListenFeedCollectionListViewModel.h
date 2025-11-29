@class NSNumber, NSMutableArray, NSArray;
@protocol AWEListenFeedCollectionListViewModelDelegate;

@interface AWEListenFeedCollectionListViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *notFinishCellModels;
@property (retain, nonatomic) NSMutableArray *allContentCellModels;
@property (retain, nonatomic) NSNumber *allContentCursor;
@property (retain, nonatomic) NSNumber *notFinishCursor;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isLoadSuccess;
@property (nonatomic) unsigned long long currentListType;
@property (weak, nonatomic) id<AWEListenFeedCollectionListViewModelDelegate> delegate;
@property (readonly, nonatomic) NSArray *currentListCellModels;
@property (nonatomic) BOOL notFinishListHasMore;
@property (nonatomic) BOOL allContentListHasMore;

- (void)requestCollectionDataListWithCursor:(id)a0 count:(id)a1 completion:(id /* block */)a2;
- (void)loadMoreIfNeeded;
- (id)createCurrentListDataController;
- (void)p_reloadDataIfNeeded;
- (void).cxx_destruct;
- (id)init;

@end
