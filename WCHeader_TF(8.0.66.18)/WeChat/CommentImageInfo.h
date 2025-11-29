@class NSString;

@interface CommentImageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int heightPercentage;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) unsigned int minArea;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *thumbUrlToken;
@property (retain, nonatomic) NSString *exifJson;

+ (void)initialize;

- (id)urlWithToken;
- (id)thumburlWithToken;

@end
