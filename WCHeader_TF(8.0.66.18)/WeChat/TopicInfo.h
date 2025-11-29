@class NSString;

@interface TopicInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL hasPublish;
@property (retain, nonatomic) NSString *contentId;
@property (retain, nonatomic) NSString *contentUrl;
@property (retain, nonatomic) NSString *leftDesc;
@property (retain, nonatomic) NSString *rightDesc;

+ (void)initialize;

@end
