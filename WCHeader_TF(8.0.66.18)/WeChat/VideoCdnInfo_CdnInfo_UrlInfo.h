@class NSData;

@interface VideoCdnInfo_CdnInfo_UrlInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *url;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) unsigned long long filesize;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int formatId;
@property (nonatomic) int expireAt;

+ (void)initialize;

@end
