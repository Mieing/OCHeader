@interface WCCommentUIUtil : NSObject

+ (id)contentTextColor:(id)a0 defaultColor:(id)a1;
+ (id)genContentStrPrefix:(id)a0 inDataItem:(id)a1;
+ (id)genContentUserStr:(id)a0 username:(id)a1 nickname:(id)a2 isHBComment:(BOOL)a3 isAdvertiserUser:(BOOL)a4 customColor:(id)a5;
+ (id)genContentStrPrefixFB:(id)a0 inDataItem:(id)a1;
+ (id)genContentUserStrFB:(id)a0 username:(id)a1 nickname:(id)a2 isHBComment:(BOOL)a3 isAdvertiserUser:(BOOL)a4 isDeleteByFeedOwner:(BOOL)a5 customColor:(id)a6;
+ (id)genAccessibilityLabel:(id)a0;
+ (id)getDisplayName:(id)a0 username:(id)a1 nickname:(id)a2 isAdvertiserUser:(BOOL)a3;
+ (BOOL)isDisplayFlagInsteadOfRealContent:(id)a0;
+ (struct CGSize { double x0; double x1; })makeEmojiSizeWithMaxSide:(double)a0 emojiInfo:(id)a1;
+ (struct CGSize { double x0; double x1; })makeImageSizeWithMinSide:(double)a0 comment:(id)a1;
+ (struct CGSize { double x0; double x1; })makeSizeWithFixedHeight:(double)a0 maxWidth:(double)a1 comment:(id)a2;
+ (struct CGSize { double x0; double x1; })makeImageSizeWithFixedHeight:(double)a0 maxWidth:(double)a1 comment:(id)a2;
+ (struct CGSize { double x0; double x1; })makeEmojiSizeWithFixedHeight:(double)a0 maxWidth:(double)a1 emojiInfo:(id)a2;
+ (void)imagePreview:(id)a0 thumb:(id)a1 image:(id)a2;
+ (void)imagePreview:(id)a0 thumb:(id)a1 item:(id)a2;
+ (void)imagePreview:(id)a0 thumb:(id)a1 item:(id)a2 dataItem:(id)a3;
+ (id)imageInfoToMediaItem:(id)a0;
+ (id)getEmoticonWrapWithMd5:(id)a0 EmojiInfoObj:(id)a1;
+ (id)formatEmoticonOrImgRichTextWithContent:(id)a0 commentUserInfo:(id)a1 emoticonBrowse:(BOOL)a2 imgBrowse:(BOOL)a3;

@end
