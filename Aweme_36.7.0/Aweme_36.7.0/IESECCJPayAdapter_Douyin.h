@class NSString;

@interface IESECCJPayAdapter_Douyin : NSObject <IESECCJPayAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cjPassthroughInfo;
+ (id)bioType;
+ (BOOL)trackPerformanceWithEventList:(id)a0;
+ (void)preLoadYueFuTemplate;
+ (id)biometricDataBase64String;
+ (id)CJPaySDKVersion;
+ (void)openUniversalPayDeskWithParams:(id)a0 callback:(id /* block */)a1;
+ (id)getFinanceRiskWithScene:(id)a0;
+ (id)installmentInfoWithCount:(id)a0;
+ (BOOL)installedUnionPayApp;
+ (id)submitOrderParamsJSONStringWithInstallmentCount:(id)a0;
+ (BOOL)preLoadUnionPayApp;
+ (BOOL)isCool;


@end
