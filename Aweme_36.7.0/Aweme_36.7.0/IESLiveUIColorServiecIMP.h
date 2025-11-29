@class NSString;

@interface IESLiveUIColorServiecIMP : NSObject <IESLiveTriaitChangeObserver, IESLiveUIColorService> {
    long long _hostPreferStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)userPreferDarkModeStyle;
- (BOOL)disableDarkMode;
- (void)setDisableDarkMode:(BOOL)a0;
- (void)setUserPreferDarkModeStyle:(long long)a0;
- (void)switchUIConfigWithPath:(id)a0;
- (void)switchUIConfigWithJsonData:(id)a0;
- (void)switchUIConfigWithDefaultSetting;
- (void)setEnableTraitChangedObserve:(BOOL)a0;
- (void)ies_globalTraitDidChangeTo:(id)a0;
- (void)ies_addGlobalTraitChangeObserver:(id)a0;
- (void)setHostPreferStyle:(long long)a0;
- (long long)hostPreferStyle;
- (BOOL)isDarkMode;

@end
