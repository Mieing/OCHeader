@class NSString;
@protocol AESoundFXListItemModelProtocol, AESoundFXPanelControllerProtocol, ACCSoundFXPickerAbilityDelegate, ACCSoundFXPickerAbilityTrackService, AESoundFXListPrefetchManagerProtocol, ACCAudioPlayerProtocol;

@interface ACCSoundFXPickerAbilityProvider : NSObject <ACCPropRecommendMusicProtocol, AESoundFXPanelControllerDelegate, ACCSoundFXPickerAbilityProtocol>

@property (retain, nonatomic) id<ACCAudioPlayerProtocol> player;
@property (retain, nonatomic) id<AESoundFXPanelControllerProtocol> soundFXPanel;
@property (retain, nonatomic) id<AESoundFXListPrefetchManagerProtocol> soundFXListPrefetchManager;
@property (nonatomic) unsigned long long usage;
@property (weak, nonatomic) id<AESoundFXListItemModelProtocol> currentSelectedItem;
@property (retain, nonatomic) id<ACCSoundFXPickerAbilityTrackService> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCSoundFXPickerAbilityDelegate> delegate;

- (id)commonTrackParams;
- (void)panelDidDragToDismiss:(id)a0;
- (void)panelWillDismiss:(id)a0;
- (void)panelDidDismiss:(id)a0;
- (void)panelDidApplyItem:(id)a0 withCategoryTab:(id)a1;
- (void)panelDidSelectedItem:(id)a0 withCategoryTab:(id)a1;
- (void)prefetchSoundFXPickerDataIfNeededForTabs:(id)a0;
- (void)showSoundFXPickerForUsage:(unsigned long long)a0 defaultLandingTabName:(id)a1 defaultLandingSoundFXModel:(id)a2 extraTrackParams:(id)a3;
- (void)dismissSoundFXPicker;
- (void)updateTracker:(id)a0;
- (void)clearTracker;
- (void)__updateCurrentSelectedItemPlayStatusInMainThread:(long long)a0;
- (void)__panelDidSelectToUseNewItem:(id)a0 withCategoryTab:(id)a1;
- (void)__downloadSoundFXMaterialIfNeededForItem:(id)a0 isPrefetch:(BOOL)a1 completion:(id /* block */)a2;
- (void)configDelegateViewWithStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;

@end
