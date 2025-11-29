@interface SwitchManagerBridge : NSObject {
    void *_cppSwitchManager;
}

@property (copy, nonatomic) id /* block */ fetchSettingConfigBlock;
@property (copy, nonatomic) id /* block */ checkSettingUpdatedBlock;
@property BOOL ready;

+ (id)sharedInstance;

- (BOOL)isSwitchOn:(long long)a0;
- (void)onSwitchUpdated:(long long)a0 callback:(id /* block */)a1;
- (void)setupFetchSettingsProxy:(id /* block */)a0 andCheckUpdatedProxy:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
