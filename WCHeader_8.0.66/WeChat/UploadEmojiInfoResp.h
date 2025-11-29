@class NSString;

@interface UploadEmojiInfoResp : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (nonatomic) int startPos;
@property (nonatomic) int totalLen;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) BOOL completed;
@property (retain, nonatomic) NSString *activityId;
@property (nonatomic) BOOL isTooLarge;

+ (void)initialize;

@end
