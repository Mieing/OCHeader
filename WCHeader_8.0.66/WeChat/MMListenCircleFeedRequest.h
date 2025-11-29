@class BaseRequest, NSString, NSData, MMListenCircleUserInfo, MMListenCircleContext;

@interface MMListenCircleFeedRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *topicId;
@property (retain, nonatomic) MMListenCircleUserInfo *userInfo;
@property (retain, nonatomic) MMListenCircleContext *context;
@property (nonatomic) BOOL isPreload;

+ (void)initialize;

@end
