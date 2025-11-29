@class NSString;

@interface CDNMediaFile : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *uri;
@property (nonatomic) unsigned long long fileType;
@property (nonatomic) unsigned long long md5;
@property (nonatomic) unsigned long long fileSize;

+ (void)initialize;

@end
