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

- (void)setExpiredTime:(unsigned int)a0;
- (unsigned int)expiredTime;
- (void)setRet:(int)a0;
- (int)ret;
- (void)setDesc:(id)a0;
- (id)desc;
- (void)setSize:(unsigned int)a0;
- (unsigned int)size;
- (void)setHeight:(unsigned int)a0;
- (unsigned int)height;
- (void)setWidth:(unsigned int)a0;
- (unsigned int)width;
- (void)setEmojiInfoBuf:(id)a0;
- (id)emojiInfoBuf;
- (void)setMd5:(id)a0;
- (id)md5;

@end
