@class BaseRequest, NSString;

@interface LikeLiveRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned long long count;

+ (void)initialize;

@end
