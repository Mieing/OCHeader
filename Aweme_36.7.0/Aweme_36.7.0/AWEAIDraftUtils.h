@interface AWEAIDraftUtils : NSObject

+ (BOOL)saveVidePathToDraftWitPath:(id)a0 toTargetPath:(id)a1;
+ (void)saveAIGCMetaInfoWithtaskModel:(id)a0 publishViewModel:(id)a1;
+ (void)saveAIDoneDraftWithVideoPath:(id)a0 multiImagePaths:(id)a1 rawImagePaths:(id)a2 coverImagePath:(id)a3 liveVideoPath:(id)a4 liveImagePath:(id)a5 taskModel:(id)a6 postProcessTrackInfo:(id)a7 draftSyncHandler:(id /* block */)a8 completion:(id /* block */)a9;

@end
