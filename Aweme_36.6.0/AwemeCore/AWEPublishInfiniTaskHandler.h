@interface AWEPublishInfiniTaskHandler : NSObject

+ (void)logStartPublishInfo:(id)a0;
+ (void)saveDraftType:(long long)a0 flowModel:(id)a1 completion:(id /* block */)a2 isBackup:(BOOL)a3;
+ (BOOL)saveDraftPrepareForExecute:(id)a0 completion:(id /* block */)a1;
+ (id)restorePublishDraftTempProduct:(id)a0;
+ (BOOL)hideDraftWhenRetry:(id)a0;
+ (BOOL)enableBackgroundUpload:(id)a0;
+ (id)taskAssosicatedParams:(id)a0;
+ (void)handleMultiSplitPublishResultIfNeed:(id)a0;
+ (void)syncPublishAfterSynthesisIfNeed:(id)a0 flag:(BOOL)a1;
+ (void)recordUserFeedback:(id)a0 stage:(id)a1;
+ (BOOL)hasMergeVideoFile:(id)a0;
+ (void)publishSuccess:(id)a0 completion:(id /* block */)a1;
+ (void)publishFail:(id)a0 stage:(id)a1 completion:(id /* block */)a2;
+ (void)checkAlbumFrames:(id)a0 isUploadFailed:(BOOL)a1 extra:(id)a2;

@end
