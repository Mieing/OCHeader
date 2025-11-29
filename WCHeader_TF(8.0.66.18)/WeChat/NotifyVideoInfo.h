@class NSString;

@interface NotifyVideoInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSString *bizNickname;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *digest;
@property (nonatomic) unsigned int publishTime;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSString *pageUrl;
@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSString *bizHeadimg;
@property (nonatomic) unsigned int bizuin;

+ (void)initialize;

@end
