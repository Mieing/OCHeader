@interface IESECCJPayHelper : NSObject

+ (id)cjPassthroughInfo;
+ (id)bioType;
+ (id)biometricDataBase64String;
+ (id)CJPaySDKVersion;
+ (id)getFinanceRiskWithScene:(id)a0;
+ (id)installmentInfoWithCount:(id)a0;
+ (BOOL)installedUnionPayApp;
+ (BOOL)preLoadUnionPayApp;
+ (BOOL)isCool;

@end
