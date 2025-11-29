@class BaseRequest, NSString;

@interface KickAudienceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *username;

+ (void)initialize;

@end
