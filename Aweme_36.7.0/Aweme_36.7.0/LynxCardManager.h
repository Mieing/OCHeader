@class LynxLruCache, NSMutableArray, LynxView;
@protocol LynxHolder;

@interface LynxCardManager : LynxBaseCardManager {
    NSMutableArray *_routeStack;
    LynxLruCache *_lruCache;
    LynxView *_lynxView;
    id<LynxHolder> _holder;
}

- (id)lynxView;
- (id)routeStack;
- (void)setLynxView:(id)a0;
- (id)holder;
- (void)setHolder:(id)a0;
- (id)lruCache;
- (void)setLruCache:(id)a0;
- (void)hideLynxView:(id)a0;
- (void)invokeOnHide:(id)a0;
- (void)invokeOnShow;
- (void)setRouteStack:(id)a0;
- (void)pauseTransition:(id)a0;
- (void).cxx_destruct;

@end
