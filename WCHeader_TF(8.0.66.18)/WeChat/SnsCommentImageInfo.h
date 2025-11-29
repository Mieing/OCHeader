@class NSString;

@interface SnsCommentImageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int heightPercentage;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) unsigned int minArea;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *thumbUrlToken;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *encIdx;
@property (retain, nonatomic) NSString *thumbKey;
@property (retain, nonatomic) NSString *thumbEncIdx;
@property (retain, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSString *md5;

+ (void)initialize;

@end
