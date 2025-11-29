@interface AWEPublishSaveAlbumReviewExport : NSObject

+ (void)p_exportWithPublishModel:(id)a0 index:(long long)a1 completion:(id /* block */)a2;
+ (id)p_templateNoteFromMultiSlot:(id)a0;
+ (id)p_fragmentInfoWithPublishModel:(id)a0;
+ (void)p_handlePathToSaveLocalPath:(id)a0 taskID:(id)a1 completion:(id /* block */)a2;
+ (id)p_absolutePathsWithFrames:(id)a0 taskID:(id)a1;
+ (BOOL)p_isInvalidFragmentInfoInModel:(id)a0;
+ (BOOL)removeAllFilePathWithTaskID:(id)a0;
+ (void)exportWithWorkspace:(id)a0 indexes:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;

@end
