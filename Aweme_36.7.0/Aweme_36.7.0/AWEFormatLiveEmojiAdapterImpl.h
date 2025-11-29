@class NSArray, IESLiveEmojiTextParser, NSString;

@interface AWEFormatLiveEmojiAdapterImpl : NSObject <AWEFormatLiveEmojiAdapterInterface>

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) IESLiveEmojiTextParser *parser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)emojiItems;
- (BOOL)isContainEmojiText:(id)a0;
- (id)parsePlainTextFromEmojiAttributedText:(id)a0;
- (id)parseEmojiAttributedTextFromPlainText:(id)a0;
- (BOOL)isOnlyEmojiText:(id)a0;
- (long long)numberOfEmojiText:(id)a0;
- (void)setupItems;
- (id)itemsWithLiveEmoticonModels:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
