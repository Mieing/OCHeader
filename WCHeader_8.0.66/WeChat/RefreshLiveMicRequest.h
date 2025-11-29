@class BaseRequest, NSString;

@interface RefreshLiveMicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *liveMicId;

+ (void)initialize;

@end
