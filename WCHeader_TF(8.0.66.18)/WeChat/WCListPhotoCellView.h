@class NSString, UIView;

@interface WCListPhotoCellView : WCListBaseCellView <WCImageViewDelegate, WCPuzzleImageViewDelegate> {
    UIView *m_imageGridView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateHeightWithGroup:(id)a0 groupItem:(id)a1 width:(double)a2 isFirstOneInsection:(BOOL)a3 isLastOneInSection:(BOOL)a4;
+ (id)defaultRichTextView;
+ (double)contentLabelWidthWithCellViewWidth:(double)a0;

- (void)initImageGridView;
- (void)initView;
- (void)safeChangeImageViewDelegate:(id)a0;
- (BOOL)handleShouldOpenNewLineAtY:(double)a0 withLineHeight:(double)a1 richTextView:(id)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)findActiveView:(id)a0;
- (void)handleClickImageContentView:(id)a0;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)onClickWCImage:(id)a0;
- (void)onClickWCPuzzleImage:(id)a0;
- (void)updateAccessibility;
- (id)customAccessibilityComponents;
- (id)accessibilityLabelForDataItem:(id)a0;
- (void).cxx_destruct;

@end
