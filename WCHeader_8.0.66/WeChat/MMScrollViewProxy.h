@class NSString, MMScrollViewMetrics;
@protocol UIScrollViewDelegate;

@interface MMScrollViewProxy : NSProxy <MMScrollMetricsDelegate, UIScrollViewDelegate> {
    MMScrollViewMetrics *_metrics;
}

@property (nonatomic) BOOL scrolling;
@property (weak, nonatomic) id<UIScrollViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (Class)class;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)onMMScrollMetricsWillCollect:(id)a0;
- (void)onMMScrollMetricsDidCollected:(id)a0;
- (void).cxx_destruct;

@end
