@class NSArray, NSMutableArray;

@interface ACCEditClipAssetsViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *usedMusicIDs;
@property (retain, nonatomic) NSArray *sourceAssetArray;
@property (retain, nonatomic) NSMutableArray *addedAssetArray;

- (void)resetClipInfoForAssetArray:(id)a0 withVideoData:(id)a1 isBrandNewAiData:(BOOL)a2;
- (id)initWithAssetArray:(id)a0;
- (id)videoAssetsInVideoData:(id)a0;
- (id)findOrGenerateAssetModelWithOriginAssetModelArray:(id)a0 withAVAsset:(id)a1 withVideoData:(id)a2 isGenerated:(BOOL *)a3;
- (id)findAssetModelIn:(id)a0 AVAsset:(id)a1;
- (void)updateSourceAssetArray:(id)a0;
- (void)resetClipInfoForAssetArray:(id)a0 withVideoData:(id)a1;
- (void)resetAssetClipInfoForAssetArray:(id)a0;
- (id)findAVAssetInVideoData:(id)a0 withAssetModel:(id)a1;
- (double)totalDurationOfSourceAssetModels;
- (double)startTimeAtIndex:(long long)a0 videoData:(id)a1;
- (BOOL)haveAssetModelInfoChangedByUserForMusicID:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeFromVEClipRange:(id)a0 asset:(id)a1;
- (id)timeRangeValueWithStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)readableTimeStringForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (unsigned long long)rotateTypeFromRadians:(double)a0;
- (void).cxx_destruct;

@end
