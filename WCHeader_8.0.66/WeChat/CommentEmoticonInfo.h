@class NSString, EmojiInfo;

@interface CommentEmoticonInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *designerId;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) EmojiInfo *emoticon;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int width;

+ (void)initialize;

- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)a0;

@end
