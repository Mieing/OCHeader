@class EmojiInfoObjAff;

@interface AddEmoticonWrapAff : WXPBGeneratedMessage

@property (retain, nonatomic) EmojiInfoObjAff *emojiInfoObj;
@property (nonatomic) int addSource;
@property (nonatomic) BOOL showDetailWhenExchangeFailed;
@property (nonatomic) int fileType;
@property (nonatomic) unsigned long long fileSize;

+ (void)initialize;

@end
