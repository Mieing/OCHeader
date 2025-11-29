@class NSString, NSArray;

@interface AWETeenDescriptionTextView : AWETeenBasicDescriptionTextView

@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isAccessibilityTraitButton;
@property (nonatomic) BOOL isAds;
@property (copy, nonatomic) NSString *adTrailingAccessibilityLabel;
@property (retain, nonatomic) NSArray *p_accessibilityElements;

- (id)entityWordAccessibilityLabel:(id)a0;
- (id)fullTextAccessibilityLabel;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (void)setAttributedText:(id)a0;
- (void)setAccessibilityElements:(id)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;

@end
