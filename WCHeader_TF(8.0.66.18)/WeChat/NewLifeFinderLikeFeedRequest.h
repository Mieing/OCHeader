@class NSString;

@interface NewLifeFinderLikeFeedRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int identity;
@property (nonatomic) unsigned int commentScene;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int enterScene;
@property (retain, nonatomic) NSString *searchClickId;

+ (void)initialize;

@end
