@interface ACCWorkspaceUtils : NSObject

+ (BOOL)isImageAlbum:(id)a0;
+ (long long)livePhotoCountForMixedSlides:(id)a0;
+ (BOOL)isInfiniSinglePhotoUseNewCanvasWithPublishViewModel:(id)a0;
+ (BOOL)hasCanvasEdit:(id)a0;
+ (BOOL)isImageAlbumOrMixed:(id)a0;
+ (BOOL)hasStickerWithProject:(id)a0;
+ (BOOL)isPublishDynamicImageAlbum:(id)a0;
+ (id)projectWithIndex:(long long)a0 workspace:(id)a1;
+ (id)videoDatasWithWorkspace:(id)a0;
+ (id)commomTrackInfosForInfini:(id)a0;
+ (BOOL)isInfiniSinglePhotoWithPublishViewModel:(id)a0;
+ (double)calculateSingleLoopDuration:(id)a0 videoSlot:(id)a1 imageSlot:(id)a2;
+ (void)calculateFinalDurationForContext:(id)a0 originalWorkspace:(id)a1;
+ (BOOL)hasAppliedTemplateWithProject:(id)a0;
+ (void)resetWorkSpaceContext:(id)a0;
+ (void)processAllTracksWithLoop:(id)a0 originalWorkspace:(id)a1;
+ (void)buildEditService:(id)a0 targetNleModel:(id)a1 originalWorkspace:(id)a2 beginTime:(double)a3 completion:(id /* block */)a4;
+ (double)livePhotoTransitionEffectDurationWithSlotDuration:(double)a0;
+ (void)processMainTrackForLoop:(id)a0;
+ (void)processTextReadTrackForLoop:(id)a0 copiedTrack:(id)a1 loopStartTime:(double)a2 loopDuration:(double)a3 singleLoopDuration:(double)a4;
+ (void)processSubTracks:(id)a0 targetNleModel:(id)a1 finalVideoDuration:(double)a2;
+ (void)addMusicTrackToContext:(id)a0 originalWorkspace:(id)a1;
+ (void)addTransitionEffectsToSlots:(id)a0 project:(id)a1;
+ (void)processSubTrack:(id)a0 copiedTrack:(id)a1 finalVideoDuration:(double)a2;
+ (double)clippedMusicDurationWithPublishModel:(id)a0;
+ (BOOL)isStaticLivePhoto:(id)a0 index:(long long)a1;
+ (BOOL)isDynamicLivePhoto:(id)a0 index:(long long)a1;
+ (long long)videoCountForMixedSlides:(id)a0;
+ (long long)photoCountForSlides:(id)a0;
+ (BOOL)isImageWithACCRepositoryProject:(id)a0;
+ (BOOL)isVideoWithACCRepositoryProject:(id)a0;
+ (void)combinedWithWorkspace:(id)a0 completion:(id /* block */)a1;
+ (BOOL)exportAtImage:(id)a0;
+ (BOOL)isInfiniLivePhoto:(id)a0 index:(long long)a1;
+ (BOOL)isStaticInfiniLivePhoto:(id)a0 index:(long long)a1;
+ (BOOL)isRealLivePhoto:(id)a0 index:(long long)a1;
+ (BOOL)hasTextReading:(id)a0 index:(long long)a1;
+ (BOOL)hasInfoStickerWithProject:(id)a0;
+ (id)allLocations:(id)a0 maxCount:(long long)a1;
+ (id)splitToIndividualWorkspaces:(id)a0;
+ (void)setupWorkspaceForNewLivePhotoSaveVideoScene:(id)a0 completion:(id /* block */)a1;

@end
