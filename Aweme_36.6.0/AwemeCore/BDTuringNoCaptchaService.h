@class NSString, BDTuringConfig, NSMutableDictionary;

@interface BDTuringNoCaptchaService : NSObject <BDTuringVerifyService>

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *host;
@property (retain, nonatomic) BDTuringConfig *config;
@property BOOL isCollecting;
@property (nonatomic) BOOL shouldReportSecInfo;
@property (nonatomic) BOOL shouldPreCollectTouchEvent;
@property (nonatomic) BOOL shouldCollectTouchEvent;
@property (nonatomic) BOOL shouldPreCollectPageHistory;
@property (nonatomic) BOOL shouldCollectPageHistory;
@property BOOL isTouchEventHookDone;
@property BOOL isPageHistoryHookDone;
@property (nonatomic) double reportTimeoutSeconds;
@property (nonatomic) double asyncCollectDurationSeconds;
@property (retain, nonatomic) NSMutableDictionary *controlSettings;
@property (nonatomic) long long popTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 confirmButtonTitle:(id)a3 cancelHandler:(id /* block */)a4 confirmHandler:(id /* block */)a5;
+ (id)NoCaptchaWithWithConfig:(id)a0;
+ (id)NoCaptchaWithAppID:(id)a0;
+ (void)initialize;

- (void)popVerifyViewWithModel:(id)a0;
- (void)setCollectingStatus:(BOOL)a0;
- (BOOL)isBackGround;
- (void)configureSettingsWithAid:(id)a0;
- (id)aesEncrypt:(id)a0 salt:(id)a1;
- (id)sha512HashFromString:(id)a0;
- (id)hexStrToNSData:(id)a0;
- (id)sha512HashFromData:(id)a0;
- (id)encryptData:(id)a0 withKey:(id)a1 iv:(id)a2;
- (void)preCollectHookInit;
- (void)checkAndPreHookTouchEventIfNeeded;
- (void)checkAndPreHookPageHistoryIfNeeded;
- (void)checkAndHookTouchEventIfNeeded;
- (void)checkAndHookPageHistoryIfNeeded;
- (void)touchEventCollectHook;
- (void)pageHistoryCollectHook;
- (void)collectHookInit;
- (void)checkAndSecReportIfNeeded;
- (void)syncPreCollectReport:(id)a0;
- (void)preCollectReport:(id)a0 callback:(id /* block */)a1;
- (void)asyncCollectReport:(id)a0 callback:(id /* block */)a1;
- (void)report:(id)a0 callback:(id /* block */)a1 type:(id)a2;
- (void)handleReportResponse:(id)a0 verifyModel:(id)a1;
- (id)buildReportData:(id)a0 type:(id)a1 subtype:(id)a2;
- (id)hexMD5FromString:(id)a0;
- (id)getCurrentPageID;
- (void)addBizInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)getRandomKey;

@end
