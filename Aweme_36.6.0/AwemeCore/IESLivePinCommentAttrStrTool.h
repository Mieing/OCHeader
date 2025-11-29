@interface IESLivePinCommentAttrStrTool : NSObject

+ (double)calculateAttributeHeightForContent:(id)a0 font:(id)a1 width:(double)a2 emojiParser:(id)a3;
+ (id)truncateOriginString:(id)a0 tailString:(id)a1 ellipsisString:(id)a2 maxWidth:(double)a3 emojiParser:(id)a4;
+ (id)truncateOriginString:(id)a0 ellipsisString:(id)a1 maxWidth:(double)a2 emojiParser:(id)a3;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })truncatedRangeForLayoutManager:(id)a0 textContainer:(id)a1;
+ (long long)lastGlyphIndexForLayoutManager:(id)a0 textContainer:(id)a1;
+ (id)parseEmojiAttributedWith:(id)a0 font:(id)a1 emojiParser:(id)a2;
+ (double)calculateAttributeHeightForAttrContent:(id)a0 width:(double)a1;

@end
