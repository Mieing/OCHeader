@interface AWEYAPRestoreService : HTSService <AWEYAPRestoreService> {
    void /* unknown type, empty encoding */ weakRestoreObjectArray;
    void /* unknown type, empty encoding */ currSessionRestoreInfo;
    void /* unknown type, empty encoding */ cacheRestoreInfo;
}

- (void)onServiceInit;
- (void)registerRestoreObject:(id)a0;
- (void)unRegisterRestoreObject:(id)a0;
- (void)doRestoreIfNeedWithLaunchOptions:(id)a0;
- (BOOL)isFromRestoreWithRouterParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
