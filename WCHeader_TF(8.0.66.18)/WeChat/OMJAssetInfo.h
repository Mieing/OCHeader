@class NSString;

@interface OMJAssetInfo : NSObject

@property (nonatomic) struct shared_ptr<XMJAssetInfo> { struct XMJAssetInfo *__ptr_; struct __shared_weak_count *__cntrl_; } backingInfo;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *mediaFilePath;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long livePhotoUsage;
@property (readonly, nonatomic) BOOL isLivePhoto;

+ (id)assetInfoWithPHAsset:(id)a0 error:(id *)a1;
+ (id)assetInfoWithPHAsset:(id)a0 livePhotoUsage:(unsigned long long)a1 error:(id *)a2;
+ (id)assetInfoWithPHLocalIdentifier:(id)a0 error:(id *)a1;
+ (id)assetInfoWithPHLocalIdentifier:(id)a0 livePhotoUsage:(unsigned long long)a1 error:(id *)a2;
+ (id)assetInfoWithMediaFileAtPath:(id)a0 identifier:(id)a1 mediaType:(long long)a2 error:(id *)a3;

- (id)initWithBackingAssetInfo:(struct shared_ptr<XMJAssetInfo> { struct XMJAssetInfo *x0; struct __shared_weak_count *x1; })a0;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
