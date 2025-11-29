@interface AWEPublishCoverLogicHandler : NSObject

+ (void)captureFrameAtDependencies:(id)a0 publishViewModel:(id)a1 preferredSize:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
+ (void)calculateCoverSourceWith:(id)a0 completion:(id /* block */)a1;
+ (void)sendCoverInfoMonitoringWithCoverModel:(id)a0;
+ (void)asyncGetNonBlackFrameAtCoverModel:(id)a0 publishViewModel:(id)a1 dependencies:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3 completion:(id /* block */)a4;
+ (void)enterPublishPageCalculateCoverTimeStampWith:(id)a0 dependencies:(id)a1 completion:(id /* block */)a2;
+ (id)calculateStickerListWith:(id)a0;
+ (double)templateCalculateCoverTspWith:(double)a0;
+ (double)stickerCalculateCoverTspWith:(double)a0;
+ (void)calculateCoverTspWithStickerId:(id)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;
+ (double)calculateSpecialCoverTimestamp:(double)a0 publishViewModel:(id)a1;
+ (BOOL)detectImageIsPureBlackWithImage:(id)a0;
+ (BOOL)canDowngradeAndUpdateCoverModel:(id)a0 publishViewModel:(id)a1;
+ (id)coverBackupConfig;
+ (BOOL)canSupportBackupWith:(id)a0 coverModel:(id)a1;
+ (BOOL)enable;

@end
