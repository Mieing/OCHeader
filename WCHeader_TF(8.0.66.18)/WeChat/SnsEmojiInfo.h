@class NSString, SKBuiltinBuffer_t;

@interface SnsEmojiInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) SKBuiltinBuffer_t *emojiInfoBuf;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int size;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) int ret;
@property (nonatomic) unsigned int expiredTime;

+ (void)initialize;

@end
