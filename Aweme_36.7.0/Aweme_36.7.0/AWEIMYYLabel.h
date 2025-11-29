@class NSString, NSDictionary;

@interface AWEIMYYLabel : YYLabel

@property (retain, nonatomic) NSString *aweim_replaceAccessibilityLabel;
@property (copy, nonatomic) NSDictionary *highlightActionMap;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setAttributedText:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (void)setTextLayout:(id)a0;
- (BOOL)accessibilityPerformMagicTap;

@end
