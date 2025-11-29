@class NSString;
@protocol AWEBytedSettingsSetupDelegate;

@interface AWEBytedSettings : AWEBaseSettings <AWEAppSettingUpdateProtocol>

@property (nonatomic) unsigned long long lastTimestamp;
@property (retain, nonatomic) id<AWEBytedSettingsSetupDelegate> setupDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)fetchSettings;
- (void)fetchSettingsWithHeaders:(id)a0;
- (void).cxx_destruct;
- (void)updateSettings:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
