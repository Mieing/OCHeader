@class BaseRequest, NSData, NSString;

@interface GetLiveMessageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) BOOL offline;

+ (void)initialize;

@end
