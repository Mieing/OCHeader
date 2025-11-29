@class UIViewController, NSMapTable;
@protocol AWEFeedContainerProtocol;

@interface AWEClientAIFeedDataSourceHelper : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (weak, nonatomic) UIViewController<AWEFeedContainerProtocol> *currentFeedContainer;
@property (retain, nonatomic) NSMapTable *strongToWeakFeedListTable;

+ (id)sharedInstance;

- (long long)awemeCount;
- (id)getCurrentAweme;
- (void)updateFeedList:(id)a0 withEnterType:(id)a1;
- (id)getFeedListWithEnterType:(id)a0;
- (long long)p_getUnwatchedFeedIndexWithFeedList:(id)a0;
- (long long)getCurrentIndex;
- (long long)getIndexByItemID:(id)a0;
- (id)getAwemeByIndex:(long long)a0;
- (long long)getUnwatchedFeedIndexWithEnterType:(id)a0;
- (id)getUnwatchedFeedListWithEnterType:(id)a0;
- (id)getWatchedFeedListWithEnterType:(id)a0 count:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
