@class NSString, AWEFeedCacheDataProvider;

@interface AWEFeedCacheLoadCacheProcessor : NSObject <AWEFeedCacheProcessor>

@property (retain, nonatomic) AWEFeedCacheDataProvider *cacheProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)onProcess:(id)a0 context:(id)a1;
- (id)initWithCacheProvider:(id)a0;
- (void).cxx_destruct;

@end
