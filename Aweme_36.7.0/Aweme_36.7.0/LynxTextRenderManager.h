@class NSMutableDictionary;

@interface LynxTextRenderManager : NSObject {
    NSMutableDictionary *_textRenderDic;
    NSMutableDictionary *_attributedTextBundleDic;
}

- (void)updateAttachmentSize:(id)a0 attributedString:(id)a1 lineHeight:(double)a2;
- (void)enumerateAttachmentsInTextStorage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 layoutManager:(id)a2 textContainer:(id)a3 renderer:(id)a4 visibleSignsSet:(id)a5 offsetDic:(id)a6;
- (void)handleHiddenInlineElementsWithSign:(long long)a0 visibleSigns:(id)a1 renderer:(id)a2;
- (struct CGPoint { double x0; double x1; })calculateAttachmentOffset:(id)a0 glyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 layoutManager:(id)a2 textContainer:(id)a3 renderer:(id)a4;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureTextWithSign:(int)a0 width:(float)a1 widthMode:(long long)a2 height:(float)a3 heightMode:(long long)a4 childrenSizeDic:(id)a5;
- (id)takeTextRender:(long long)a0;
- (void)putAttributedTextBundle:(long long)a0 textBundle:(id)a1;
- (id)getInlineElementOffsetDic:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
