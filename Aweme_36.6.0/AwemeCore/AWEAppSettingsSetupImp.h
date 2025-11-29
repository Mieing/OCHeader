@class NSString;

@interface AWEAppSettingsSetupImp : NSObject <AWEBytedSettingsSetupDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)settingHost;
- (id)addLanguageParams:(id)a0;

@end
