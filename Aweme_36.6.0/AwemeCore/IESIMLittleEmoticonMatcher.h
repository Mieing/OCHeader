@class NSRegularExpression, NSString, IESIMEmoticonConfig;

@interface IESIMLittleEmoticonMatcher : HTSService <IESIMLittleEmoticonMatcher>

@property (retain, nonatomic) NSRegularExpression *emoticonRegex;
@property (retain, nonatomic) IESIMEmoticonConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mapEmotionTextToYYAttachmentOfSideLength:(double)a0 forAttriStr:(id)a1;
- (id)mapAnimateEmotionTextToYYAttachmentOfSideLength:(double)a0 forAttriStr:(id)a1;
- (void)matchEmoticonToYYEmojiAttachmentForAttributedString:(id)a0 font:(id)a1;
- (void)matchEmoticonToYYTextAttachmentForAttributedString:(id)a0 font:(id)a1;
- (void)matchEmoticonToYYTextAttachmentForAttributedString:(id)a0 font:(id)a1 emojiSize:(struct CGSize { double x0; double x1; })a2;
- (unsigned long long)matchEmoticonForAttributedString:(id)a0 font:(id)a1 maxEmoticonCount:(long long)a2 cursorLocation:(unsigned long long)a3;
- (void)matchEmoticonForAttributedString:(id)a0 font:(id)a1 color:(id)a2;
- (void)matchEmoticonForAttributedString:(id)a0 creator:(id)a1;
- (void)matchEmoticonForAttributedString:(id)a0 createBlock:(id /* block */)a1;
- (id)matchEmoticonsForString:(id)a0;
- (id)removeEmoticonAttributesFor:(id)a0;
- (id)removeEmoticonAttributesFor:(id)a0 containPureEmoji:(BOOL *)a1;
- (id)plainTextForAttributedString:(id)a0;
- (void)enumerateEmoticons:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (BOOL)shouldEnlargeEmoticonForAttributedString:(id)a0;
- (id)plainTextForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)matchEmoticonForAttributedString:(id)a0 font:(id)a1;
- (id)removeEmoticonAttributesFor:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 containPureEmoji:(BOOL *)a2;
- (void).cxx_destruct;
- (id)init;

@end
