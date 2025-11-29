@class AWECommerceSettingsModel, NSString;

@interface AWECommerceSettings : NSObject <AWESettingsComboRequestProtocol, AWEAppAwemeSettingMessage>

@property (retain, nonatomic) AWECommerceSettingsModel *settingsModelFromClientSettings;
@property (retain, nonatomic) AWECommerceSettingsModel *settingsModel;
@property (readonly, nonatomic) BOOL isSettingsUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hitABTest;
+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)a0;
+ (void)doOriginalActions;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)awemeSettingDidChange;
- (void)fetchRequestAfterLaunch;
- (void)fetchRequestAfterLaunch;
- (void)fetchRequestIfNeed;
- (void)fetchRequestIfNeed;
- (void)updateSettingsModel:(id)a0;
- (void)updateSettingsModel:(id)a0;
- (void)updateSettingsModelFromClientSettings;
- (void)asynJsonModelWithSettings:(id)a0;
- (void).cxx_destruct;
- (void)updateSettings:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)fetchRequest;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
