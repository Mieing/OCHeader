@class NSMutableArray;

@interface TTCdnCacheVerifyManager : NSObject {
    BOOL verifyEnabled;
    BOOL isAddFilter;
    NSMutableArray *verifyRegexMutableArray;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } verifyRegexLock;
}

+ (id)shareInstance;

- (void)addCdnCacheVerifyRequestFilter;
- (id /* block */)generateVerifyRequestFilterBlock;
- (id /* block */)generateVerifyResponseChainFilterBlock;
- (BOOL)isVerifyEnabled;
- (BOOL)filterRule:(id)a0;
- (id)generateVerifyValue;
- (void)onConfigChange:(BOOL)a0 data:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
