@class YYLabel, NSMutableAttributedString;

@interface AWEBasicModeDescriptionElement : AWEBasicModeFakeElement

@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) NSMutableAttributedString *descriptionLabelOriginString;
@property (retain, nonatomic) NSMutableAttributedString *descriptionLabelExpandedString;
@property (nonatomic) BOOL descriptionLabelIsExpanded;
@property (retain, nonatomic) YYLabel *shrinkLabel;

- (void)p_setup;
- (double)leftContainerWidth;
- (void)setDescriptionTextViewContentAnimated:(BOOL)a0;
- (void)updateViewLayout;
- (void)updateDescLabelIfExpand:(BOOL)a0;
- (id)handleDescriptionEmptyLine:(id)a0;
- (void)setDescriptionTextViewContent:(id)a0 animated:(BOOL)a1 precomputationExpanded:(BOOL)a2;
- (id)createContentDescriptionStringFrom:(id)a0;
- (void)setKernOfDescriptionAttributedString:(id)a0;
- (void)handleLinksForDescriptionAttributedString:(id)a0;
- (void)updateExpandTagIfNeededWithAttributedString:(id)a0 precomputationExpanded:(BOOL)a1;
- (void)updateParagraphStyleWithAttributedString:(id)a0;
- (void)matchEmoticonIfNeededForDescriptionAttributedString:(id)a0;
- (unsigned long long)descriptionNumberOfLines;
- (id)useExpandedStringIfNeed;
- (id /* block */)descriptionLabelTapAction:(id)a0;
- (id)titleExpandStringForAttributeString:(id)a0;
- (struct CGSize { double x0; double x1; })lastLineSizeForAttributeString:(id)a0 constraintSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)directionForString:(id)a0;
- (struct CGSize { double x0; double x1; })lastLineSizeForAttributeString:(id)a0 constranitSize:(struct CGSize { double x0; double x1; })a1 maxLineCount:(long long)a2;
- (void)setModel:(id)a0;
- (void).cxx_destruct;

@end
