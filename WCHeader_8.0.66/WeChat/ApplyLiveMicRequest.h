@class BaseRequest, NSString;

@interface ApplyLiveMicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *cliMsgId;

+ (void)initialize;

@end
