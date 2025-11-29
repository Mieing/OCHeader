@interface TAVEmptyAssetGenerator : NSObject

+ (id)emptyVideoAsset;
+ (id)emptyAudioAsset;
+ (void)createAudioAssetIfNeed;
+ (void)createEmptyVideoAssetIfNeed;
+ (id)resourceUrlForFileName:(id)a0 extension:(id)a1;

@end
