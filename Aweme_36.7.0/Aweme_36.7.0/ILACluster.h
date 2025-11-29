@class NSString, NSMutableArray, ILAFace;

@interface ILACluster : NSObject <CAKAlbumInsightItemData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long clusterId;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *assetInfos;
@property (retain, nonatomic) ILAFace *coverFace;

- (id)coverAssetId;
- (void).cxx_destruct;
- (id)assetIds;
- (id)title;
- (id)initWithCluster:(struct shared_ptr<ILASDK::FaceCluster> { struct FaceCluster *x0; struct __shared_weak_count *x1; })a0;

@end
