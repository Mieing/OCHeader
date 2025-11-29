@interface TextStateUtil : NSObject

+ (id)decodedExtInfoFromBase64String:(id)a0;
+ (id)encodedBase64StringFromExtInfo:(id)a0;
+ (BOOL)isTextStateList:(id)a0 changedComparedTo:(id)a1;
+ (id)mergeSortInfosFromLikeInfos:(id)a0 referenceInfos:(id)a1;
+ (id)hardcodedDefaultImageId;
+ (id)randomDefaultImageId;
+ (id)defaultImageForId:(id)a0;
+ (id)defaultImageIdForTextStateId:(id)a0;
+ (id)defaultImageIdForNumber:(unsigned long long)a0;
+ (void)addShadowEffectToLabel:(id)a0;
+ (void)addShadowEffectToButton:(id)a0;
+ (id)GetIconResourcePath;
+ (id)GetIconResourceTempPath;
+ (BOOL)disableDragToHoverForContact:(id)a0;
+ (id)emojiInfoFromTextStatusEmojiInfo:(id)a0;
+ (BOOL)enableComment;
+ (id)fetchFinderDataItemWithTid:(id)a0 nonceId:(id)a1;
+ (long long)getMaxInputChineseCharacterLength;

@end
