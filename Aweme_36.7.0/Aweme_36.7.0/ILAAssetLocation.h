@class NSString, ILALocationItem;

@interface ILAAssetLocation : NSObject

@property (nonatomic) struct shared_ptr<ILASDK::AssetLocation> { struct AssetLocation *__ptr_; struct __shared_weak_count *__cntrl_; } originAssetLocation;
@property (copy, nonatomic) NSString *assetID;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) long long status;
@property (retain, nonatomic) ILALocationItem *continent;
@property (retain, nonatomic) ILALocationItem *country;
@property (retain, nonatomic) ILALocationItem *subdivision;
@property (retain, nonatomic) ILALocationItem *city;
@property (retain, nonatomic) ILALocationItem *district;
@property (retain, nonatomic) ILALocationItem *town;
@property (retain, nonatomic) ILALocationItem *aoi;

- (id)initWithOriginAssetLocation:(struct shared_ptr<ILASDK::AssetLocation> { struct AssetLocation *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ILASDK::AssetLocation> { struct AssetLocation *x0; struct __shared_weak_count *x1; })getTargetAssetLocation;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
