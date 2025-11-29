@class BaseRequest, MMListenItem;

@interface MMListenCheckSpamRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MMListenItem *listenCtx;
@property (nonatomic) BOOL isPreload;

+ (void)initialize;

@end
