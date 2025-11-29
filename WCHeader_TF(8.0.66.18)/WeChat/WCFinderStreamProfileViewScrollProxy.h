@class NSString;
@protocol UIScrollViewDelegate;

@interface WCFinderStreamProfileViewScrollProxy : NSProxy <UIScrollViewDelegate> {
    struct _DelegateFlag { unsigned char scrollViewDidScroll : 1; unsigned char endScrollingAnimation : 1; unsigned char scrollWillBeginDragging : 1; unsigned char scrollWillEndDragging : 1; unsigned char scrollDidEndDragging : 1; unsigned char scrollViewDidEndDecelerating : 1; unsigned char scrollWillBeginDecelerating : 1; } _delegateFlag;
    struct _DelegateFlag { unsigned char scrollViewDidScroll : 1; unsigned char endScrollingAnimation : 1; unsigned char scrollWillBeginDragging : 1; unsigned char scrollWillEndDragging : 1; unsigned char scrollDidEndDragging : 1; unsigned char scrollViewDidEndDecelerating : 1; unsigned char scrollWillBeginDecelerating : 1; } _forwardDelegateFlag;
}

@property (weak, nonatomic) id<UIScrollViewDelegate> forwardDelegate;
@property (weak, nonatomic) id<UIScrollViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkDelegate:(struct _DelegateFlag { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } *)a0 delegate:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
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
- (void).cxx_destruct;

@end
