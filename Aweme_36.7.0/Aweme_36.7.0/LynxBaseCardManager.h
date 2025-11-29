@class LynxLruCache, LynxView, NSMutableArray;
@protocol LynxHolder;

@interface LynxBaseCardManager : NSObject

@property (retain, nonatomic) LynxView *lynxView;
@property (retain, nonatomic) NSMutableArray *routeStack;
@property (retain, nonatomic) LynxLruCache *lruCache;
@property (weak, nonatomic) id<LynxHolder> holder;

- (id)buildLynxView:(id)a0;
- (void)hideLynxView:(id)a0;
- (void)invokeOnHide:(id)a0;
- (id)init:(id)a0 WithCapacity:(long long)a1;
- (void)registerInitLynxView:(id)a0;
- (void)push:(id)a0 param:(id)a1;
- (void)replace:(id)a0 param:(id)a1;
- (BOOL)onNavigateBack;
- (void)invokeOnShow;
- (void)pop;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (void)didEnterForeground;
- (void)clearCaches;

@end
