@class NSString;

@interface IESECCjInfoServiceImpl : NSObject <IESECCjInfoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cjPassthroughInfo;
+ (id)bioType;
+ (BOOL)trackPerformanceWithEventList:(id)a0;
+ (BOOL)preLoadChannel:(unsigned long long)a0;
+ (BOOL)checkChannelInstallState:(unsigned long long)a0;
+ (void)preLoadYueFuTemplate;
+ (id)getCjInfo;
+ (id)biometricDataBase64String;
+ (id)CJPaySDKVersion;
+ (void)openUniversalPayDeskWithParams:(id)a0 callback:(id /* block */)a1;
+ (id)getFinanceRiskWithScene:(id)a0;
+ (BOOL)isSafeEnv;


@end
