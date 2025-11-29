@class NSString;

@interface PublishUGCToGameCenterRequest_MediaInfo : WXPBGeneratedMessage

@property (nonatomic) int mediaType;
@property (retain, nonatomic) NSString *mediaUrl;
@property (retain, nonatomic) NSString *thumbPicUrl;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) BOOL isGif;
@property (nonatomic) unsigned int duration;
@property (nonatomic) long long size;
@property (nonatomic) unsigned int editFlag;

+ (void)initialize;

@end
