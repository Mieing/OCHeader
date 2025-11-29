@class NSArray;

@interface AWEDescriptionLabel : YYLabel {
    NSArray *_p_accessibilityElements;
}

@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isAccessibilityTraitButton;
@property (nonatomic) BOOL isAds;
@property (copy, nonatomic) id /* block */ touchBeganBlock;
@property (copy, nonatomic) id /* block */ touchCancelBlock;
@property (copy, nonatomic) id /* block */ hitTestBlock;

- (void)handleLongPress:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)enablePredictFetch;
- (id)entityWordAccessibilityLabel:(id)a0;
- (id)fullTextAccessibilityLabel;
- (BOOL)enableHitBlock;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (void)setAttributedText:(id)a0;
- (void)setAccessibilityElements:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)shouldGroupAccessibilityChildren;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;

@end
