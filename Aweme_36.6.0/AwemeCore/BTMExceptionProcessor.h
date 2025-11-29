@class BTMInnerManager;

@interface BTMExceptionProcessor : NSObject

@property (weak, nonatomic) BTMInnerManager *btmInnerManager;
@property (copy) id /* block */ cacheGet;
@property (copy) id /* block */ cacheSet;
@property (copy) id /* block */ cacheClear;

- (void)onAppWillTerminate;
- (void)onAppDidEnterBackground;
- (id)sceneStringify:(long long)a0;
- (void)setPageShowCache;
- (id)initWithBTMInnerMananger:(id)a0;
- (void)checkPageShowCacheWithParams:(id)a0;
- (void)onSDKInitailFinished;
- (void).cxx_destruct;

@end
