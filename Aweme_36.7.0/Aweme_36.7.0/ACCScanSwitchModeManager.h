@class NSString;

@interface ACCScanSwitchModeManager : NSObject <ACCScanSwitchModeManagerStudioProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)scanQuestionEnable;
+ (BOOL)scanSwitchModeSettingsEnable;
+ (BOOL)scanQRCodeEnable;
+ (BOOL)scanSwitchModeEnable;
+ (BOOL)isScanFamilyMode:(id)a0;


@end
