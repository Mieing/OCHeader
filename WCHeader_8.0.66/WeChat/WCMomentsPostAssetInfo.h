@class NSString, EditImageAttr, EditVideoAttr;

@interface WCMomentsPostAssetInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) long long assetType;
@property (nonatomic) long long mediaSource;
@property (nonatomic) BOOL isEdited;
@property (retain, nonatomic) EditImageAttr *imageEditAttr;
@property (retain, nonatomic) EditVideoAttr *videoEditAttr;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) BOOL livePhotoOpt;
@property (nonatomic) long long livePhotoDurationMs;
@property (copy, nonatomic) NSString *uploadHash;
@property (nonatomic) struct CGSize { double width; double height; } uploadMediaSize;

- (id)initWithAssetId:(id)a0 assetType:(long long)a1 fromSource:(long long)a2;
- (id)initWithAssetHash:(id)a0 assetType:(long long)a1 fromSource:(long long)a2;
- (id)initWithImage:(id)a0 fromSource:(long long)a1;
- (id)initWithSightDraft:(id)a0 fromSource:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
