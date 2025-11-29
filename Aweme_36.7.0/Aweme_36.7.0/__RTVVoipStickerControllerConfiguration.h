@class NSString;
@protocol RTVXRSettingsInterface, RxInjector, RTVSettingsManager;

@interface __RTVVoipStickerControllerConfiguration : NSObject <RTVVoipStickerControllerConfigurationInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> xrSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)categoryFilter:(id)a0;
- (BOOL)shouldShowStickerWithID:(id)a0;
- (void).cxx_destruct;
- (id)panelName;

@end
