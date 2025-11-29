@class NSString;

@interface MMListenMpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int mpType;
@property (retain, nonatomic) NSString *webUrl;
@property (retain, nonatomic) NSString *audioUrl;
@property (retain, nonatomic) NSString *mpCtxJson;
@property (nonatomic) unsigned int bizuin;
@property (retain, nonatomic) NSString *audioId;
@property (nonatomic) unsigned int sourceType;

+ (void)initialize;

@end
