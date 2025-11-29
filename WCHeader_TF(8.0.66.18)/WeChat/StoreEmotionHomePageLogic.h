@interface StoreEmotionHomePageLogic : NSObject

@property (nonatomic) unsigned long long sessionId;

+ (id)cachePath;

- (void)fetchHomePageWithCompletionHandler:(id /* block */)a0;
- (id)recordListCache;
- (void)setRecordListCache:(id)a0;

@end
