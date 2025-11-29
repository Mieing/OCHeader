@class NSString;

@interface VideoChannelTopBarReqInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *syncBuffer;
@property (retain, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSString *detailPageUrl;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
