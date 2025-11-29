@class BaseRequest, NSString;

@interface CloseLiveMicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *cliMsgId;
@property (retain, nonatomic) NSString *liveMicId;
@property (retain, nonatomic) NSString *micSdkUserId;

+ (void)initialize;

@end
