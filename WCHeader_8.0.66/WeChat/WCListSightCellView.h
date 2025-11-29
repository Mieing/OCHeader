@class NSString, UIButton;

@interface WCListSightCellView : WCListBaseCellView <WCImageViewDelegate> {
    UIButton *m_tailView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateHeightWithGroup:(id)a0 groupItem:(id)a1 width:(double)a2 isFirstOneInsection:(BOOL)a3 isLastOneInSection:(BOOL)a4;
+ (id)defaultRichTextView;
+ (double)contentLabelWidthWithCellViewWidth:(double)a0;

- (void)initTailView;
- (void)initView;
- (void)onClickWCImage:(id)a0;
- (void)onClickContent:(id)a0;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)layoutStatusIconImageView;
- (double)statusIconImageViewBottom;
- (BOOL)handleShouldOpenNewLineAtY:(double)a0 withLineHeight:(double)a1 richTextView:(id)a2;
- (void)updateAccessibility;
- (id)customAccessibilityComponents;
- (void).cxx_destruct;

@end
