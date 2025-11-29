@class NSString, MegaVideoFeed;

@interface MegaVideoMinimizeContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int commentScene;
@property (retain, nonatomic) NSString *contextId;
@property (retain, nonatomic) MegaVideoFeed *feed;

+ (void)initialize;

@end
