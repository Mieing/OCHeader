@class NSString;

@interface MediaItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *mediaUrl;
@property (nonatomic) BOOL videoH5Play;

+ (void)initialize;

@end
