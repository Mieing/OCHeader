@class NSString, NSArray, ILAAsset;

@interface ILATimeCluster : NSObject <CAKAlbumInsightItemData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *localIds;
@property (retain, nonatomic) ILAAsset *coverAsset;

- (id)coverAssetId;
- (void).cxx_destruct;
- (id)assetIds;
- (id)title;
- (id)initWithCluster:(struct shared_ptr<ILASDK::TimeCluster> { struct TimeCluster *x0; struct __shared_weak_count *x1; })a0;

@end
