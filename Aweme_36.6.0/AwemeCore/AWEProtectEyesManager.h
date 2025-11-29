@class UIImage, NSString;

@interface AWEProtectEyesManager : NSObject <AWEIMSettingModelUpdateMessage>

@property (retain, nonatomic) UIImage *lutImage;
@property (retain, nonatomic) UIImage *HDRlutImage;
@property (nonatomic) BOOL eyeProtectionOn;
@property (nonatomic) long long protectEyesValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (void)turnOffEyeProtectionModeIfNeeded;
- (void)turnOnEyeProtectionModeWhenAppStartIfNeeded;
- (BOOL)isABProtectEyes;
- (void)syncProtectEyesValueToServerValue:(long long)a0;
- (void)updateLiveWithMode:(long long)a0;
- (void)turnOnEyeProtectionModeIfNeeded:(long long)a0;
- (void)updatePreotectEyesModeFromIMSeting:(id)a0;
- (void)updateProtectEyesModeFromStorage;
- (void)traceEyeCareModeInfo:(long long)a0;
- (void)updateProtectEyesMode:(long long)a0;
- (void)turnOnEyeProtectionModeUnSave:(long long)a0;
- (void)turnOffEyeProtectionModeUnSave;
- (void).cxx_destruct;

@end
