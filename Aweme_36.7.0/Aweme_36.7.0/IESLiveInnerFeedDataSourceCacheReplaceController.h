@class NSString, NSDictionary, IESLiveInnerFeedCacheReplaceTrackerInterceptorImpl, IESLiveInnerFeedCacheReplaceModel, NSMutableArray, IESLiveInnerFeedContext;

@interface IESLiveInnerFeedDataSourceCacheReplaceController : NSObject <IESLiveInnerFeedCacheService, IESLiveInnerFeedDisplayAction, IESLiveInnerFeedDataProviderInjectionProtocol>

@property (nonatomic) BOOL cacheInserted;
@property (nonatomic) BOOL needDelete;
@property (nonatomic) BOOL needPostUnread;
@property (nonatomic) long long feedRequestCount;
@property (nonatomic) long long displayCount;
@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) NSMutableArray *feedCacheArray;
@property (retain, nonatomic) IESLiveInnerFeedCacheReplaceTrackerInterceptorImpl *trackerInterceptorImpl;
@property (retain, nonatomic) IESLiveInnerFeedCacheReplaceModel *feedCacheModel;
@property (nonatomic) long long cacheType;
@property (retain, nonatomic) NSDictionary *localCacheConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedDidLoad;
- (void)innerFeedWillDisplayObject:(id)a0 atIndex:(long long)a1;
- (void)innerFeedDidEndDecelerating:(id)a0;
- (void)innerFeedDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (void)innerFeedDataDidChangeWithType:(unsigned long long)a0 datas:(id)a1 hasMore:(BOOL)a2 success:(BOOL)a3;
- (id)deleteItems;
- (long long)roomContentCategory;
- (void)updateFeedCacheArray:(id)a0;
- (id)feedCacheTrackerInterceptorContentCategory:(id)a0;
- (id)feedCacheTrackerInterceptorContentCacheType:(id)a0;
- (id)unreadItems;
- (void)cacheLocalUnreadItems;
- (void)updateFeedCacheArray:(id)a0 cacheType:(long long)a1;
- (void)deleteItemsIfNeed:(BOOL)a0;
- (id)transFeedBaseItemWithFeedItemArray:(id)a0;
- (void)insertItemWhenInnerFeedEmptyIfNeeded;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
