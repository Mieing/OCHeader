@interface HMDCrashDynamicDataProvider : NSObject {
    BOOL _needRefreshContext;
    BOOL _needRefreshFilters;
}

- (void)networkAccessChanged:(id)a0;
- (void)applicationStateChanged:(id)a0;
- (void)sceneDidUpdate;
- (void)networkQualityDidChanged:(id)a0;
- (id)init;
- (void)applicationWillTerminate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)setup;
- (void)removeObserver;

@end
