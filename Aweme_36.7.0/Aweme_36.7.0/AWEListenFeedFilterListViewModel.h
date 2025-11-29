@class AWEListenFeedFilterListContext, AWEListDataController;

@interface AWEListenFeedFilterListViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWEListDataController *dataController;
@property (nonatomic) long long count;
@property (retain, nonatomic) AWEListenFeedFilterListContext *context;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)loadMoreListData;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (long long)cellNumber;
- (void)syncDataIfNeed;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;
- (void)setupWithContext:(id)a0;

@end
