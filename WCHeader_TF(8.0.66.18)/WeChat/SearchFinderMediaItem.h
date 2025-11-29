@class NSString;

@interface SearchFinderMediaItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int videoPlayDuration;

+ (void)initialize;

@end
