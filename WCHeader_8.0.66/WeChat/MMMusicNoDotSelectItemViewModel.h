@class NSString, WCFinderDataItem, MMAsset, MMMusicFinderVideoCellModel;

@interface MMMusicNoDotSelectItemViewModel : MMObject

@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) MMAsset *asset;
@property (retain, nonatomic) NSString *assetLocalPath;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSString *finderCoverUrl;
@property (nonatomic) double duration;
@property (retain, nonatomic) WCFinderDataItem *draftFinderDataItem;
@property (retain, nonatomic) MMMusicFinderVideoCellModel *finderVideoCellModel;
@property (nonatomic) unsigned long long index;

+ (id)modelFromMMMusicAlbumVideoCellModel:(id)a0;
+ (id)modelFromMMMusicFinderVideoCellModel:(id)a0;
+ (id)modelFromTid:(id)a0 nonceId:(id)a1;

- (void)preLoad;
- (id)genMMMusicMVTrackItemLocalVideo;
- (BOOL)isDraftItem;
- (id)genMMMusicMVTrackItemLocalPic;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToMMMusicNoDotSelectItemViewModel:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
