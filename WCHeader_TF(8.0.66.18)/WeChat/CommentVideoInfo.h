@class NSString;

@interface CommentVideoInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *videoToken;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *coverToken;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int durationSecond;
@property (nonatomic) unsigned int heightPercentage;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) unsigned int minArea;

+ (void)initialize;

@end
