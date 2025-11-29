@class NSString, NSMutableArray;

@interface MMListenCircleMpInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *picUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) int itemShowType;
@property (retain, nonatomic) NSMutableArray *picUrls;
@property (nonatomic) unsigned int msgid;
@property (nonatomic) unsigned int msgidx;

+ (void)initialize;

@end
