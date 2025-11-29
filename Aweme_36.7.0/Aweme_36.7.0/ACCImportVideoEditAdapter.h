@interface ACCImportVideoEditAdapter : NSObject

+ (double)videoMinSeconds;
+ (id)degreeOfRotateType:(unsigned long long)a0;
+ (id)createMultiTrackNormalVideoDataWithMainTrackAssetArray:(id)a0 subTrackAssetArray:(id)a1 cahceDirPath:(id)a2;
+ (id)createNormalVideoDataWithSourceAssetArray:(id)a0 cahceDirPath:(id)a1;
+ (id)createNormalVideoDataWithSourceAssetArray:(id)a0 isLimitDuration:(BOOL)a1 isReset:(BOOL)a2 cacheDirPath:(id)a3;
+ (id)configLimitDuration:(BOOL)a0 isReset:(BOOL)a1 currentTotalDuration:(double *)a2 withAsset:(id)a3;
+ (double)videoMaxSeconds;

@end
