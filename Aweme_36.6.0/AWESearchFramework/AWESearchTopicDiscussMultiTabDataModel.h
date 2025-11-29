@class AWESearchCachalotDataController, NSArray;

@interface AWESearchTopicDiscussMultiTabDataModel : NSObject

@property (retain, nonatomic) AWESearchCachalotDataController *dataController;
@property (copy, nonatomic) NSArray *viewModelList;
@property (nonatomic) long long loadMoreFooterState;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) BOOL enableCancelRequestingLoadMore;
@property (nonatomic) BOOL forceDisableAsyncLoadMore;
@property (nonatomic) BOOL pullRefreshHeaderEnable;

- (void).cxx_destruct;

@end
