@class NSString, NSDictionary;

@interface AWEFormatRTCClientConfig : NSObject

@property (nonatomic) long long env;
@property (copy, nonatomic) NSString *rtcAppID;
@property (copy, nonatomic) NSString *rtcToken;
@property (copy, nonatomic) NSString *rtcBusinessID;
@property (copy, nonatomic) NSString *rtcUserID;
@property (copy, nonatomic) NSString *rtcRoomID;
@property (copy, nonatomic) NSString *rtcSignKey;
@property (copy, nonatomic) NSDictionary *rtcVideoParam;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) BOOL shouldAutoSubscribeAudio;
@property (nonatomic) BOOL shouldAutoSubscribeVideo;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *abTestConfig;

- (void)setupWithConfigDict:(id)a0;
- (id)initWithConfigString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfigDict:(id)a0;

@end
