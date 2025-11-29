@class BaseRequest, NSString;

@interface FinderGetReplayLiveInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
