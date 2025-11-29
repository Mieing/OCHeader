@class NSString, NSMutableArray, ITMFace;

@interface ITMCluster : NSObject

@property (nonatomic) long long clusterId;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *assetInfos;
@property (retain, nonatomic) ITMFace *coverFace;

- (void).cxx_destruct;
- (id)initWithCluster:(struct shared_ptr<ILASDK::FaceCluster> { struct FaceCluster *x0; struct __shared_weak_count *x1; })a0;

@end
