@class IGListAdapter;

@interface IGListAdapterProxy : NSProxy {
    id _collectionViewTarget;
    id _scrollViewTarget;
    IGListAdapter *_interceptor;
}

- (id)initWithCollectionViewTarget:(id)a0 scrollViewTarget:(id)a1 interceptor:(id)a2;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
