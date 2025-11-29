@class NSString, NSArray, ILAAsset;

@interface ILALocationCluster : NSObject <CAKAlbumInsightItemData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *localIds;
@property (retain, nonatomic) ILAAsset *coverAsset;

- (id)coverAssetId;
- (void).cxx_destruct;
- (id)assetIds;
- (id)title;
- (id)initWithCluster:(struct shared_ptr<ILASDK::LocationCluster> { struct LocationCluster *x0; struct __shared_weak_count *x1; })a0;

@end
