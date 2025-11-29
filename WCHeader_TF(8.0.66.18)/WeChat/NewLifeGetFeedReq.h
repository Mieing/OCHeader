@class NSString;

@interface NewLifeGetFeedReq : WXPBGeneratedMessage

@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) NSString *nonceId;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long enterScene;
@property (retain, nonatomic) NSString *clientUdfKv;
@property (nonatomic) BOOL forceReq;

+ (void)initialize;

@end
