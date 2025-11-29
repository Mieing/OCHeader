@class NSString;

@interface FinderVideoMedia : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) unsigned int videoPlayLen;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (retain, nonatomic) NSString *md5Sum;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) int bitrate;
@property (retain, nonatomic) NSString *decodeKey;

+ (void)initialize;

@end
