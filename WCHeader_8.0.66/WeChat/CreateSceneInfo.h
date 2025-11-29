@class NSString;

@interface CreateSceneInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int createScene;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *fromWxUsername;
@property (nonatomic) unsigned long long sourceFeedId;

+ (void)initialize;

@end
