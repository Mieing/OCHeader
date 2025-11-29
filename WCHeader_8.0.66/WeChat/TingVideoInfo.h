@interface TingVideoInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long length;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) unsigned long long bitrate;

+ (void)initialize;

@end
