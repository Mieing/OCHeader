@interface AWEStudioDraftResourceFinder : NSObject

+ (void)sortFilesByModificationTime:(id)a0;
+ (BOOL)isImageSuffix:(id)a0;
+ (id)findImagesInTmpDirectory:(id)a0;
+ (id)findImagesInProjectDirectory:(id)a0;
+ (id)findVideosWithPrefix:(id)a0 inFolder:(id)a1;
+ (BOOL)isVideoSuffix:(id)a0;
+ (id)findMVMaterialForModel:(id)a0;
+ (id)findImageAlbumImagesForModel:(id)a0;
+ (id)findImportVideosForModel:(id)a0;
+ (id)findRecordVideosForModel:(id)a0;
+ (id)findCoverImageForModel:(id)a0;

@end
