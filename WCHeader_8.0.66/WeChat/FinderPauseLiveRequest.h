@class BaseRequest, NSString;

@interface FinderPauseLiveRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int pauseSecond;
@property (nonatomic) unsigned int pauseMode;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
