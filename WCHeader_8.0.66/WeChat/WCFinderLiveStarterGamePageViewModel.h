@class MMFinderLiveGameCategoryInfo;
@protocol WCFinderLiveStarterGamePageViewModelDelegate;

@interface WCFinderLiveStarterGamePageViewModel : NSObject

@property (retain, nonatomic) MMFinderLiveGameCategoryInfo *tabInfo;
@property (nonatomic) BOOL hasFetchData;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) id<WCFinderLiveStarterGamePageViewModelDelegate> delegate;

- (id)initWithTabInfo:(id)a0 delegate:(id)a1;
- (void)updateState;
- (id)getCurrentGameCategoryInfo;
- (void)fetchMoreDataWithFetchMore:(BOOL)a0;
- (void).cxx_destruct;

@end
