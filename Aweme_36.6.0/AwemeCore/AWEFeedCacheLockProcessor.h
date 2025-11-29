@class NSString, OnceLock;

@interface AWEFeedCacheLockProcessor : NSObject <AWEFeedCacheProcessor>

@property (nonatomic) BOOL isLock;
@property (retain, nonatomic) OnceLock *process_lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)onProcess:(id)a0 context:(id)a1;
- (id)initWithLock:(id)a0 isLock:(BOOL)a1;
- (void).cxx_destruct;

@end
