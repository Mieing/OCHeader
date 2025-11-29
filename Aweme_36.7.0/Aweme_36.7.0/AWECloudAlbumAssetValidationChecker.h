@interface AWECloudAlbumAssetValidationChecker : NSObject

+ (BOOL)validNewClipsAssetModelForVideo:(double)a0;
+ (id)checkVideoWithWidth:(double)a0 height:(double)a1 duration:(double)a2;
+ (id)checkPhotoWithWidth:(double)a0 height:(double)a1;
+ (BOOL)exceedMaxDurationForAIVideoClip:(double)a0;
+ (BOOL)validResolutionAssetModelForVideoWidth:(double)a0 height:(double)a1;
+ (id)checkAssetValidation:(id)a0;

@end
