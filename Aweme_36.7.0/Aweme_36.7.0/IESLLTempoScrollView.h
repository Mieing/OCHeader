@class UIColor, NSString, NSMutableSet, IESLLTempoScrollBar, CAAnimationGroup;

@interface IESLLTempoScrollView : UIScrollView <UIScrollViewDelegate>

@property (nonatomic) long long direction;
@property (retain, nonatomic) IESLLTempoScrollBar *scrollBar;
@property (retain, nonatomic) NSMutableSet *bounceDirections;
@property (retain, nonatomic) NSString *animationName;
@property (retain, nonatomic) CAAnimationGroup *animationGroup;
@property (copy, nonatomic) NSString *viewId;
@property (nonatomic) BOOL firstRending;
@property (nonatomic) BOOL enableScrollBar;
@property (nonatomic) double scrollBarOffset;
@property (nonatomic) double scrollBarWidth;
@property (nonatomic) double scrollBarLength;
@property (nonatomic) double scrollBarContentLength;
@property (nonatomic) double scrollBarRadius;
@property (retain, nonatomic) UIColor *scrollBarColor;
@property (retain, nonatomic) UIColor *scrollBarContentColor;
@property (nonatomic) double initScrollOffset;
@property (nonatomic) BOOL initOffsetScrollTriggered;
@property (copy, nonatomic) id /* block */ onScroll;
@property (copy, nonatomic) id /* block */ onScrollEnd;
@property (copy, nonatomic) id /* block */ onScrollToBounce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isScrollContainer;
- (BOOL)canShowBounceDirection:(long long)a0;
- (void)updateScrollBarRatio;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
