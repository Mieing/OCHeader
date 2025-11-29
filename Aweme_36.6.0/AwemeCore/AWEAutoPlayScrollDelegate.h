@class UIScrollView, NSString;
@protocol UIScrollViewDelegate, AWEAutoPlayContainer;

@interface AWEAutoPlayScrollDelegate : NSObject <UIScrollViewDelegate>

@property (nonatomic) double latestOffsetY;
@property (nonatomic) unsigned long long direction;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double latestTriggleOffsetY;
@property (weak, nonatomic) id<AWEAutoPlayContainer> container;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollProxy;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playTriggleRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)autoPlayVisibleVideoCellWithScrollView:(id)a0 direction:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithContainer:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)conformsToProtocol:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)autoPlay;

@end
