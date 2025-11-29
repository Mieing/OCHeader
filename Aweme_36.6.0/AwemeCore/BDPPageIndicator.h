@class NSString, NSMutableArray, UIColor;

@interface BDPPageIndicator : UIView <CAAnimationDelegate> {
    NSMutableArray *_dotLayers;
    UIColor *_dotDefaultColor;
    UIColor *_dotHighlightColor;
}

@property (nonatomic) long long currentPageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)changeFromColor:(id)a0 toColor:(id)a1 forDot:(id)a2 animated:(BOOL)a3;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCurrentPageIndex:(long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updatePageCount:(long long)a0;

@end
