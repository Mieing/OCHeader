@class NSString;

@interface ImageUrlInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *scale;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned long long fsize;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;

+ (void)initialize;

@end
