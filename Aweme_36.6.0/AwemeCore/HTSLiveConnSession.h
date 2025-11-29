@class NSString;

@interface HTSLiveConnSession : GPBMessage

@property (nonatomic) long long userId;
@property (nonatomic) long long deviceId;
@property (nonatomic) long long appId;
@property (nonatomic) long long appVersion;
@property (copy, nonatomic) NSString *platform;
@property (nonatomic) long long connTimeMs;
@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSString *port;

+ (id)descriptor;

@end
