@class NSString, AWEFeedCacheDataDepository;

@interface AWEFeedCacheDataProvider : NSObject

@property (retain, nonatomic) AWEFeedCacheDataDepository *dataDepository;
@property (copy, nonatomic) NSString *name;

- (id)initWithName:(id)a0 dataDepository:(id)a1;
- (void)loadCache:(long long)a0 completion:(id /* block */)a1;
- (void)loadCacheWithArray:(id)a0 completion:(id /* block */)a1;
- (id)providerNameWithItemID:(id)a0;
- (void).cxx_destruct;

@end
