@class NSString;

@interface EmojiUploadInfoResp : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (nonatomic) int startPos;
@property (nonatomic) int totalLen;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned long long newMsgId;

+ (void)initialize;

@end
