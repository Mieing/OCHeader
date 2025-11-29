@class NSString, NSArray;

@interface ITMAsset : NSObject {
    struct shared_ptr<ILASDK::Asset> { struct Asset *__ptr_; struct __shared_weak_count *__cntrl_; } targetAsset;
}

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long mediaType;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL hasSetLocation;
@property (nonatomic) long long createTime;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSArray *imageDataList;

+ (long long)ilaMediaTypeWithOriginType:(char)a0;
+ (long long)ilaMediaType:(id)a0;

- (id)initWithPHAsset:(id)a0 enableLocation:(BOOL)a1;
- (void)updateWithAsset:(id)a0 enableLocation:(BOOL)a1;
- (id)initWithAssetTask:(struct shared_ptr<ITMSDK::AssetTask> { struct AssetTask *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithOriginAsset:(struct shared_ptr<ILASDK::Asset> { struct Asset *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ILASDK::Asset> { struct Asset *x0; struct __shared_weak_count *x1; })assetCPP;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
