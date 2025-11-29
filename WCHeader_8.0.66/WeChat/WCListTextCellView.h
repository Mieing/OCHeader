@interface WCListTextCellView : WCListBaseCellView

+ (double)calculateHeightWithGroup:(id)a0 groupItem:(id)a1 width:(double)a2 isFirstOneInsection:(BOOL)a3 isLastOneInSection:(BOOL)a4;
+ (double)contentLabelHeightWithDataItem:(id)a0 contentLabelWidth:(double)a1;

- (void)initView;
- (void)onClickEvent;
- (BOOL)handleShouldOpenNewLineAtY:(double)a0 withLineHeight:(double)a1 richTextView:(id)a2;
- (void)updateAccessibility;
- (id)customAccessibilityComponents;

@end
