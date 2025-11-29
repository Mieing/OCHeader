@class IESEffectModel;
@protocol RTVStorageArea, RxInjector;

@interface __RTVEffectCacheManager : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVStorageArea> effectStorage;
@property (readonly, nonatomic) id<RTVStorageArea> stickerStorage;
@property (readonly, nonatomic) IESEffectModel *currentSticker;
@property (retain) IESEffectModel *defaultFilterModel;

- (void)setCachedAppliedFilter:(id)a0;
- (id)cachedAppliedFilter;
- (void)cacheAppliedSticker:(id)a0;
- (id)cachedAppliedSticker;
- (void).cxx_destruct;

@end
