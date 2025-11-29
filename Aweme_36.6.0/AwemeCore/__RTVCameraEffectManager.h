@class NSString;
@protocol RTVStorageArea, RxInjector, RTVEffectCacheManager, RTVNetworkManager;

@interface __RTVCameraEffectManager : NSObject <RTVCameraEffectManager>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVNetworkManager> networkManager;
@property (readonly, nonatomic) id<RTVEffectCacheManager> cacheManager;
@property (readonly, nonatomic) id<RTVStorageArea> effectManagerStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)requestBeautyConfig;
- (id)reportAppliedBeautyEffects:(id)a0;
- (id)reportAppliedBeautyEffects:(id)a0 gender:(long long)a1;
- (void)setCachedAppliedFilter:(id)a0;
- (id)cachedAppliedFilter;
- (void)cacheAppliedSticker:(id)a0;
- (id)cachedAppliedSticker;
- (id)shouldShowStickerPanelBubble;
- (void)updateShouldShowStickerPanelBubble:(BOOL)a0;
- (id)fecthStickerModelsWithDefaultStickerIDs:(id)a0;
- (id)downloadStickerIfNeed:(id)a0;
- (void).cxx_destruct;

@end
