@class NSArray, AWEAssetModel;

@interface ACCCutSameWorksAssetModel : NSObject

@property (retain, nonatomic) AWEAssetModel *assetModel;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } sourceTimeRange;
@property (copy, nonatomic) NSArray *cropPoints;

- (id)initWithAssetModel:(id)a0 startTime:(double)a1 endTime:(double)a2 cropPoints:(id)a3;
- (void).cxx_destruct;

@end
