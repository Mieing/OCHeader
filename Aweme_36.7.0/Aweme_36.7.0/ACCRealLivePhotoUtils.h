@interface ACCRealLivePhotoUtils : NSObject

+ (void)assembleLivePhotoDataWithPublishViewModel:(id)a0 videoData:(id)a1;
+ (double)imageDuration;
+ (id)getImageSlotWithProject:(id)a0;
+ (id)getImageClipWithMegaEditor:(id)a0;
+ (void)updatePresetTrackInfo:(id)a0 filePath:(id)a1;
+ (id)getVideoClipsWithMegaEditor:(id)a0;
+ (void)syncEffectFromImage:(id)a0 toLivePhoto:(id)a1;
+ (id)getImageSlotWithNleModel:(id)a0;
+ (BOOL)enableRealLivePhotoOpt:(id)a0;
+ (id)getMainVideoWithPublishViewModel:(id)a0 videoData:(id)a1;
+ (BOOL)shouldAutoCrop:(id)a0;
+ (void)updateVideoCrop:(id)a0;
+ (void)updateClipsEnableWithPublishViewModel:(id)a0 videoData:(id)a1;
+ (void)updateRepoInfoWithPublishViewModel:(id)a0;
+ (void)updateDataWithPublishViewModel:(id)a0 oldImageURL:(id)a1 oldVideoURL:(id)a2;
+ (void)setFixedTimeIfNeeded:(id)a0;
+ (struct AEKGeometryClipCorner { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })calculateVideoClipInfoFromImageClipInfo:(id)a0 error:(id *)a1;
+ (BOOL)pointEqual:(struct CGPoint { double x0; double x1; })a0 point2:(struct CGPoint { double x0; double x1; })a1;
+ (id)getImageSlotWithTrack:(id)a0;
+ (BOOL)enableRealLivePhotoSingleToMulti:(id)a0;
+ (void)checkLivePhotoDataValidWithPublishViewModel:(id)a0 error:(id *)a1;
+ (void)updateClipsViewIndexWithPublishViewModel:(id)a0;
+ (void)updateClipsRangeWithPublishViewModel:(id)a0;
+ (void)updateVideoCropIfNeeded:(id)a0;
+ (BOOL)isCropInfoEqually:(id)a0;
+ (id)getVideoSlotsWithNleModel:(id)a0;
+ (BOOL)hasAnyRealLivePhoto:(id)a0;
+ (BOOL)livePhotoVideoDurationOptimizationEnabled:(id)a0;

@end
