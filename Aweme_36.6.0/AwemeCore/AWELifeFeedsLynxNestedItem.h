@class UIScrollView;
@protocol AWELifeFeedsLynxNestedItemDelegate;

@interface AWELifeFeedsLynxNestedItem : NSObject

@property (weak, nonatomic) UIScrollView *outsideScrollView;
@property (weak, nonatomic) UIScrollView *insideScrollView;
@property (nonatomic) BOOL observing;
@property (nonatomic) double scrollMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } nestedInsets;
@property (nonatomic) double insideScrollMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insideInsets;
@property (nonatomic) BOOL tracking;
@property (nonatomic) BOOL dragging;
@property (nonatomic) BOOL decelerating;
@property (nonatomic) long long panState;
@property (weak, nonatomic) UIScrollView *scrollingView;
@property (nonatomic) BOOL skipOutsideScrollWhenSetInset;
@property (nonatomic) BOOL skipInsideScrollWhenSetInset;
@property (nonatomic) BOOL skipScroll;
@property (weak, nonatomic) id<AWELifeFeedsLynxNestedItemDelegate> delegate;

- (void)addNestedScrollEventListen;
- (void)removeNestedScrollEventListen;
- (void)outsideScrollViewPanAction:(id)a0;
- (void)setupNestedInsets;
- (id)initWithOutsideScrollView:(id)a0 insideScrollView:(id)a1;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)didScroll;
- (void)dealloc;

@end
