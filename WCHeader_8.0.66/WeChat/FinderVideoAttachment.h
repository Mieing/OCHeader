@class NSString, MegaVideo;

@interface FinderVideoAttachment : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) MegaVideo *video;
@property (retain, nonatomic) NSString *videoNonceId;

+ (void)initialize;

@end
