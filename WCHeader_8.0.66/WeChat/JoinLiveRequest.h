@class BaseRequest, NSString, NSData;

@interface JoinLiveRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSData *liveCookies;

+ (void)initialize;

@end
