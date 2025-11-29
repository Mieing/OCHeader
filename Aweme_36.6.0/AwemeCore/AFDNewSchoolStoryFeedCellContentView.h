@class AFDNewSchoolStoryFeedCellFrameContent, NSArray;

@interface AFDNewSchoolStoryFeedCellContentView : YYLabel {
    NSArray *_p_accessibilityElements;
}

@property (retain, nonatomic) AFDNewSchoolStoryFeedCellFrameContent *feedContentFrame;
@property (copy, nonatomic) id /* block */ didTapShowFullTextBlock;

- (void)configWithFrame:(id)a0;
- (id)fullTextButtonWithAweme:(id)a0;
- (void)addHighlightColorAttributeForAttrString:(id)a0 positions:(id)a1 highlightColor:(id)a2;
- (void)viewDidAppear;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (void)setAccessibilityElements:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;

@end
