@interface AWEIMRichTextUtil : NSObject

+ (void)parseAttributedString:(id)a0 toRichTextInfosOnCompletion:(id /* block */)a1;
+ (id)assembleAttributedString:(id)a0 withRichTextInfos:(id)a1;
+ (id)highlightedAtStringWithOriginalAttributedString:(id)a0 richTextInfos:(id)a1 hightColor:(id)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })composedRangeForAttriText:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)parseForSavingDraftWithAttributedString:(id)a0 toRichTextInfosOnCompletion:(id /* block */)a1;
+ (id)allowKeysForMessageExtDict;
+ (id)applyRichTextInfos:(id)a0 intoAttributedString:(id)a1;
+ (id)iesim_highlightedAtStringWithOriginalAttributedString:(id)a0 richTextInfos:(id)a1 hightColor:(id)a2;
+ (id)highlightedComponentInfoTextWithOriginalAttributedString:(id)a0 richTextInfos:(id)a1;
+ (void)parseAttributedString:(id)a0 toRichTextInfosForAttributes:(id)a1 onCompletion:(id /* block */)a2;
+ (id)allKeysForDraft;
+ (unsigned long long)infoTypeForAttributeKey:(id)a0;
+ (void)applyTextStyleInfo:(id)a0 intoMutableAttributedString:(id)a1;
+ (id)font:(id)a0 withWeight:(unsigned long long)a1;
+ (id)attributeKeyForInfoType:(unsigned long long)a0;
+ (id)removeComposedAttributesAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forAttributedText:(id)a1;
+ (id)allKeys;

@end
