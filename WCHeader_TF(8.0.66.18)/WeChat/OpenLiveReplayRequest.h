@class BaseRequest, NSString;

@interface OpenLiveReplayRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) BOOL enableLiveReplay;

+ (void)initialize;

@end
