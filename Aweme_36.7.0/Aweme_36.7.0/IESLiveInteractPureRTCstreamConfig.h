@class NSString, NSDictionary;

@interface IESLiveInteractPureRTCstreamConfig : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *rtcAppID;
@property (copy, nonatomic) NSString *rtcToken;
@property (copy, nonatomic) NSString *rtcBusinessID;
@property (copy, nonatomic) NSString *rtcUserID;
@property (copy, nonatomic) NSString *rtcRoomID;
@property (copy, nonatomic) NSString *rtcSignKey;
@property (copy, nonatomic) NSString *forceGlobalApiServer;
@property (copy, nonatomic) NSDictionary *rtcVideoParam;
@property (nonatomic) long long rtcVendor;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *deviceID;
@property (nonatomic) long long env;
@property (copy, nonatomic) NSString *abTestConfig;
@property (copy, nonatomic) NSString *publicStreamID;
@property (nonatomic) BOOL autoPublishStream;
@property (nonatomic) BOOL enableVAD;
@property (nonatomic) long long volumeCallbackInterval;
@property (nonatomic) BOOL autoSubscribeAudioAfterRemoteUserJoin;
@property (nonatomic) BOOL autoSubscribeVideoAfterRemoteUserJoin;
@property (nonatomic) BOOL useExternalRender;
@property (copy, nonatomic) NSString *rtcExtInfo;

- (void)setupWithRTCExtInfo:(id)a0;
- (id)initWithRTCExtInfoString:(id)a0;
- (id)initWithRTCExtInfo:(id)a0;
- (void).cxx_destruct;

@end
