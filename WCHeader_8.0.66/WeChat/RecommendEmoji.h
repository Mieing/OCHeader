@class EmojiInfo, NSString;

@interface RecommendEmoji : WXPBGeneratedMessage

@property (retain, nonatomic) EmojiInfo *info;
@property (retain, nonatomic) NSString *meaning;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *tabWording;
@property (nonatomic) unsigned int emojiFrom;
@property (retain, nonatomic) NSString *recReason;

+ (void)initialize;

@end
