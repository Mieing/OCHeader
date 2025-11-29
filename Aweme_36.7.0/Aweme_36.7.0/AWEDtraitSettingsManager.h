@class NSString;

@interface AWEDtraitSettingsManager : NSObject <AWEAppAwemeSettingMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)dtraitTypeWithRequestPath:(id)a0 dtraitConfig:(id)a1;
+ (id)defaultInstance;

- (void)awemeSettingDidChange;
- (void)refreshSettings;
- (id)init;

@end
