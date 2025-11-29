@class BaseRequest, NSString;

@interface CloseApplyLiveMicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) BOOL enableApplyLiveMic;

+ (void)initialize;

@end
