@class BaseRequest, NSString;

@interface CloseLiveRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) BOOL cutLive;

+ (void)initialize;

@end
