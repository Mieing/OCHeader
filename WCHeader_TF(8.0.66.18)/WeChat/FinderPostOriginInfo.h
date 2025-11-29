@class NSString;

@interface FinderPostOriginInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *notUploadReason;
@property (nonatomic) unsigned int videoType;
@property (nonatomic) unsigned long long size;
@property (nonatomic) float duration;
@property (nonatomic) unsigned int fps;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned long long videoBitrate;
@property (nonatomic) unsigned long long audioBitrate;

+ (void)initialize;

@end
