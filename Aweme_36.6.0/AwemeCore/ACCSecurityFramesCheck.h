@interface ACCSecurityFramesCheck : NSObject

+ (long long)expectedNumberOfAssetFramesInPublishModel:(id)a0 offsetAllowed:(long long *)a1;
+ (BOOL)isErrorWithExpectedCount:(long long)a0 realCount:(long long)a1 offsetAllowed:(long long)a2 decodeErrorCount:(long long)a3;
+ (void)trackerEvent:(id)a0 count:(long long)a1 expectedCount:(long long)a2 expected:(long long)a3 publishModel:(id)a4;
+ (long long)expectedNumberOfPropFramesInPublishModel:(id)a0;
+ (BOOL)isErrorWithExpectedCount:(long long)a0 realCount:(long long)a1 offsetAllowed:(long long)a2;
+ (long long)expectedNumberOfCustomStickerFramesInPublishModel:(id)a0;
+ (long long)expectedNumberOfVideoCoverFramesInPublishModel:(id)a0;
+ (long long)expectedNumberOfBrushStickerFramesInPublishModel:(id)a0;
+ (long long)expectedNumberOfShareCommentFramesInPublishModel:(id)a0;
+ (void)checkAssetFrames:(id)a0 decodeErrorCount:(long long)a1 publishModel:(id)a2;
+ (void)checkAlbumFramesWithRealCount:(long long)a0 expectedCount:(long long)a1 isUploadFailed:(BOOL)a2 publishModel:(id)a3 extra:(id)a4;
+ (void)checkAudioExpectedCounts:(long long)a0 actualCount:(long long)a1 expectedDuration:(double)a2 actualDuration:(double)a3 publishModel:(id)a4;
+ (void)checkTextExpectedCounts:(long long)a0 textArray:(id)a1 isImageAlbum:(BOOL)a2 publishModel:(id)a3;
+ (void)checkPropsFrames:(id)a0 publishModel:(id)a1;
+ (void)checkCustomStickerFrames:(id)a0 publishModel:(id)a1;
+ (void)checkVideoCoverFrames:(id)a0 publishModel:(id)a1;
+ (void)checkExceptionForFallback:(BOOL)a0;
+ (void)checkBrushStickerFrames:(id)a0 publishModel:(id)a1;
+ (void)checkShareCommentFrames:(id)a0 publishModel:(id)a1;
+ (void)checkPicTemplateImageFrames:(id)a0 publishModel:(id)a1;

@end
