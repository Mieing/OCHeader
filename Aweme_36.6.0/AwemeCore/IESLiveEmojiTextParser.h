@class UIColor, UIFont, NSString, IESLiveEmojiCache;
@protocol IESLiveEmoticonResource, IESLiveCommentEmojiResourceManager;

@interface IESLiveEmojiTextParser : NSObject <IESLiveEmojiTextParser> {
    BOOL _enable_live_emoji_comment;
}

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double emojiScaling;
@property (retain) IESLiveEmojiCache *emoticonImageCache;
@property (retain, nonatomic) id<IESLiveEmoticonResource> emoticonResource;
@property (retain, nonatomic) id<IESLiveCommentEmojiResourceManager> commentEmojiResourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isContainEmojiText:(id)a0;
+ (BOOL)isOnlyEmojiText:(id)a0;
+ (long long)numberOfEmojiText:(id)a0;
+ (BOOL)isPureEmojiString:(id)a0 lessThanCount:(unsigned long long)a1;
+ (id)parserWithFont:(id)a0 textColor:(id)a1;
+ (id)emojiRegex;
+ (id)matchResultsFromString:(id)a0;
+ (id)parseEmojiTextToPurePlainText:(id)a0;
+ (BOOL)isLowPcuGuideChatAttachmentEmoji:(id)a0;
+ (long long)lengthOfTextForEmojiAsOne:(id)a0;
+ (BOOL)isLiveTextPureEmojiString:(id)a0 lessThanCount:(unsigned long long)a1;
+ (id)emojiRegularResult:(id)a0;
+ (id)matchResultsFromString:(id)a0 checkValid:(id /* block */)a1;

- (id)parsePlainTextFromEmojiAttributedText:(id)a0;
- (id)parseEmojiAttributedTextFromPlainText:(id)a0;
- (id)emojiRegularExpression;
- (id)getFusionEmojiWithID:(id)a0;
- (id)getLowPcuGuideChatEmojiWithID:(id)a0;
- (void)resetColor:(id)a0;
- (void)resetFont:(id)a0;
- (id)parseEmojiAttributedTextFromPlainText:(id)a0 extraAttr:(id)a1;
- (id)validMatchResultsFromString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })parsePlainTextRangeFromEmojiAttibutedText:(id)a0 withAttributedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)resetEmojiScaling:(double)a0;
- (id)getImageWithEmojiText:(id)a0;
- (id)parseEmojiAttributedTextFromPlainText:(id)a0 extraAttr:(id)a1 lockRanges:(id)a2;
- (id)parseVSEmojiAttributedTextFromPlainText:(id)a0 extraAttr:(id)a1;
- (void)setBackStringForAttributedString:(id)a0 backedString:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)parseVSEmojiAttributedTextFromPlainText:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
