@class NSString;

@interface AddWxagVideoRequest_VideoInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *snapshot;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int size;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *videoBrief;
@property (retain, nonatomic) NSString *extContent;

+ (void)initialize;

@end
