@class NSArray, NSDictionary;
@protocol IESIMEmoticonManager;

@interface AWEECOMIMEmojiDataManager : NSObject

@property (copy, nonatomic) NSArray *emojiDataSource;
@property (retain, nonatomic) NSDictionary *emojiDict;
@property (retain, nonatomic) id<IESIMEmoticonManager> emoticonManager;

+ (id)sharedManager;

- (void)replaceEmojiForAttributedString:(id)a0 font:(id)a1 displayType:(long long)a2;
- (id)emojiWithEmojiDescription:(id)a0;
- (id)matchingEmojiForString:(id)a0;
- (id)emojiAttributeForYYLabelWithStickerMatchingResult:(id)a0 font:(id)a1;
- (id)emojiAttributeForSystemUIWithStickerMatchingResult:(id)a0 font:(id)a1;
- (void).cxx_destruct;

@end
