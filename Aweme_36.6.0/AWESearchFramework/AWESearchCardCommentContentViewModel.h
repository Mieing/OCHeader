@interface AWESearchCardCommentContentViewModel : NSObject

+ (id)defaultAvatarImage;
+ (BOOL)enableReplaceImageTextColor;
+ (id)avatarImageWithColor:(id)a0;
+ (double)preCaculateLayoutForComment:(id)a0 width:(double)a1 maximumNumberOfRows:(unsigned long long)a2;
+ (double)commentWidthWithCellWidth:(double)a0 comment:(id)a1;
+ (id)attributedContentForPreCalculateWithComment:(id)a0;
+ (id)generateCommentText:(id)a0;
+ (void)addBasicTextAttributeForContentString:(id)a0;
+ (void)appendSearchIconWithComment:(id)a0 attrComment:(id)a1;
+ (void)addEmotionIconForAttrCommentContent:(id)a0;
+ (void)appendImageStickerWithComment:(id)a0 attrComment:(id)a1;
+ (void)addParagraphStyleForContentString:(id)a0;
+ (struct CGSize { double x0; double x1; })imageStickerSizeWithType:(long long)a0 comment:(id)a1;
+ (void)replaceWithIconCommentContent:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 highlightText:(id)a2 iconSize:(struct CGSize { double x0; double x1; })a3 iconHorizontalPosition:(unsigned long long)a4 iconVerticalPosition:(unsigned long long)a5;
+ (struct CGSize { double x0; double x1; })likeLabelTextRealsize:(id)a0 maxWidth:(double)a1;
+ (void)drawSuffixForSearchTextContent:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 extra:(id)a2;
+ (id)tagLabelViewWithType:(long long)a0 comment:(id)a1;
+ (void)addTextExtrasForAttrCommentContent:(id)a0 commentModel:(id)a1 tapHighlightAction:(id /* block */)a2;
+ (void)addImageLabelForAttrCommentContent:(id)a0 commentModel:(id)a1 tapHighlightAction:(id /* block */)a2;
+ (void)addGifTagLabelForAttrCommentContent:(id)a0 commentModel:(id)a1 tapHighlightAction:(id /* block */)a2;

@end
