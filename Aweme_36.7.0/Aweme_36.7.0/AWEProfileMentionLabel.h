@class NSMutableArray, NSAttributedString;

@interface AWEProfileMentionLabel : YYLabel

@property (retain, nonatomic) NSMutableArray *accessibilityElementsArray;
@property (nonatomic) struct CGSize { double width; double height; } lastLabelSize;
@property (retain, nonatomic) NSAttributedString *lastAttributedString;
@property (retain, nonatomic) NSMutableArray *accessibilityViewArray;

- (void)handleLongPress:(id)a0;
- (void)layoutSubviews;
- (BOOL)calculateMentionAccessibilityIfNeeded;
- (void)updateLastCalculateMessage;
- (void)calculateMentionAccessibility;
- (void).cxx_destruct;
- (void)calculate;

@end
