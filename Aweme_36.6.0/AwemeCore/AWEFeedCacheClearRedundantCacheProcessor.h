@class NSString, AWEFeedCacheDataDepository;

@interface AWEFeedCacheClearRedundantCacheProcessor : NSObject <AWEFeedCacheProcessor>

@property (retain, nonatomic) AWEFeedCacheDataDepository *dataDepository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)onProcess:(id)a0 context:(id)a1;
- (id)initWithDataDepository:(id)a0;
- (void).cxx_destruct;

@end
