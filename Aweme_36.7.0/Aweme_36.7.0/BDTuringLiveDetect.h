@class NSString, BDTuringConfig;

@interface BDTuringLiveDetect : NSObject <BDTuringVerifyService>

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *host;
@property (retain, nonatomic) BDTuringConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveDetectWithAppID:(id)a0;
+ (id)liveDetectWithWithConfig:(id)a0;
+ (void)initialize;

- (void)popVerifyViewWithModel:(id)a0;
- (void)configureSettingsWithAid:(id)a0;
- (void)verify:(id)a0 ticket:(id)a1 salt:(id)a2 image:(id)a3 depthArr:(id)a4 callback:(id /* block */)a5;
- (void)createSession:(id)a0 callback:(id /* block */)a1;
- (id)buildVerifyData:(id)a0 image:(id)a1 depthArr:(id)a2;
- (id)convertUIImageToBase64:(id)a0;
- (id)aesEncrypt:(id)a0 salt:(id)a1;
- (id)sha512HashFromString:(id)a0;
- (id)hexStrToNSData:(id)a0;
- (id)sha512HashFromData:(id)a0;
- (id)encryptData:(id)a0 withKey:(id)a1 iv:(id)a2;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)getRandomKey;

@end
