@class BaseRequest, NSString;

@interface ShareLiveRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;

+ (void)initialize;

@end
