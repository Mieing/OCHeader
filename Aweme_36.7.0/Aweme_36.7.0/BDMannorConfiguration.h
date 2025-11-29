@class NSString, NSNumber;
@protocol BDMannorAppStoreDownloadProtocol, BDMannorRequestProtocol, BDMannorSaaSConfigProtocol, BDMannorRouterProtocol, BDMannorHostCommonCapabilityProtocol, BDMannorAdTrackProtocol, BDMannorGetAppInfoProtocol;

@interface BDMannorConfiguration : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *backUrlScheme;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *userIp;
@property (copy, nonatomic) NSString *installId;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSNumber *reportADType;
@property (retain, nonatomic) NSNumber *geckoDealyMinutes;
@property (retain, nonatomic) id<BDMannorAdTrackProtocol> adTrackHandler;
@property (retain, nonatomic) id<BDMannorRouterProtocol> routerHandler;
@property (retain, nonatomic) id<BDMannorGetAppInfoProtocol> getAppInfoHandler;
@property (retain, nonatomic) id<BDMannorAppStoreDownloadProtocol> downloadHandler;
@property (retain, nonatomic) id<BDMannorRequestProtocol> requestHandler;
@property (retain, nonatomic) id<BDMannorHostCommonCapabilityProtocol> hostCommonCapabilityHandler;
@property (retain, nonatomic) id<BDMannorSaaSConfigProtocol> saasConfigHandler;

- (id)mannorAdTrackHandler:(id)a0;
- (void).cxx_destruct;

@end
