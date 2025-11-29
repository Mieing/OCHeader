@interface IESSCEmptyAssetGenerator : NSObject

+ (id)emptyAudioAssetWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
+ (id)createEmptyVideoAsset;
+ (id)createAudioAsset;
+ (id)emptyAudioAsset;
+ (id)resourceUrlForFileName:(id)a0 extension:(id)a1;
+ (id)emptyVideoAsset;

@end
