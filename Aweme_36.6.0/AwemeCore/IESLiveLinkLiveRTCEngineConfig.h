@class NSString, NSDictionary;

@interface IESLiveLinkLiveRTCEngineConfig : NSObject

@property (copy, nonatomic) NSString *rtcAppId;
@property (copy, nonatomic) NSString *rtcToken;
@property (copy, nonatomic) NSString *rtcAppSign;
@property (copy, nonatomic) NSString *rtcChannelId;
@property (copy, nonatomic) NSString *rtcUserId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *forceGlobalApiServer;
@property (copy, nonatomic) NSDictionary *rtcOther;
@property (nonatomic) BOOL visibility;
@property (nonatomic) long long extraBusinessType;

- (void).cxx_destruct;

@end
