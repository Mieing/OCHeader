@class NSString;

@interface NewLifeLikeFeedReq : WXPBGeneratedMessage

@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) NSString *nonceId;
@property (nonatomic) BOOL isFavorite;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int enterScene;
@property (retain, nonatomic) NSString *searchClickId;

+ (void)initialize;

@end
