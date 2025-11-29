@interface IESLiveCommonTaskHelper : NSObject

+ (BOOL)traceEnable;
+ (id)_taskSettingConfig;
+ (BOOL)taskEnable;
+ (id)incrementTaskId;
+ (id)taskAdjustRemoteWithTask:(id)a0;
+ (BOOL)openTrackingMode;
+ (BOOL)openOnlyDefaultMode;
+ (BOOL)openLoopBusyMode;
+ (BOOL)openLoopFixTimeMode;
+ (double)openLoopFixTimeInterval;

@end
