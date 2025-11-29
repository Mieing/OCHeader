@class NSString, EcVideoInfo;

@interface EcAsset : NSObject

@property (readonly, nonatomic) NSString *awe_ECID;
@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) long long cloudId;
@property (copy, nonatomic) NSString *localId;
@property (copy, nonatomic) NSString *localPath;
@property (nonatomic) long long mediaType;
@property (nonatomic) int duration;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long size;
@property (nonatomic) BOOL isDeleted;
@property (copy, nonatomic) NSString *thumbnailUrl;
@property (copy, nonatomic) NSString *previewUrl;
@property (readonly, nonatomic) long long mediaSubtypes;
@property (retain, nonatomic) EcVideoInfo *videoInfo;

+ (id /* block */)isEqualBlock;
+ (long long)mediaTypeSubType:(id)a0;

- (id)initWithTagRelation:(id)a0 localAsset:(id)a1 cloudAsset:(id)a2;
- (id)getThumbnail;
- (id)getPreviewUrl;
- (void)setIsLocalAsset:(BOOL)a0;
- (void)setPhAsset:(id)a0;
- (BOOL)isLocalAsset;
- (BOOL)hasPreloadPreviewImage;
- (void)setHasPreloadPreviewImage:(BOOL)a0;
- (BOOL)isDelete;
- (void).cxx_destruct;
- (BOOL)isLocal;
- (BOOL)isCloud;
- (BOOL)isImage;
- (id)avAsset;
- (void)setAvAsset:(id)a0;
- (BOOL)isVideo;
- (id)phAsset;

@end
