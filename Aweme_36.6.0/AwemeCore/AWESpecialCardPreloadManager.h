@class AWESpecialCardCachePool;

@interface AWESpecialCardPreloadManager : NSObject

@property (retain, nonatomic) AWESpecialCardCachePool *cachePool;

- (BOOL)containsPreCreateLynxSpecialCardWithModel:(id)a0;
- (void)removePreCreateLynxSpecialCardWithModel:(id)a0;
- (id)getPreCreateLynxSpecialCardWithModel:(id)a0;
- (void)preCreateLynxSpecialCardWithModel:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)appDidReceiveMemoryWarningNotification;
- (void).cxx_destruct;
- (id)init;

@end
