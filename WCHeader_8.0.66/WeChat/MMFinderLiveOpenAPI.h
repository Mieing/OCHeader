@interface MMFinderLiveOpenAPI : NSObject

+ (void)getLiveStatusWithUserName:(id)a0 liveID:(id)a1 successfulBlock:(id /* block */)a2 failedBlock:(id /* block */)a3;
+ (void)getLiveStatusWithUserName:(id)a0 liveID:(id)a1 scene:(unsigned int)a2 disableLocalCache:(BOOL)a3 successfulBlock:(id /* block */)a4 failedBlock:(id /* block */)a5;
+ (void)showLiveRoomWithExportObject:(id)a0 fromVC:(id)a1 customParam:(id)a2 completation:(id /* block */)a3;
+ (void)showLiveRoomWithUserName:(id)a0 fromVC:(id)a1 customParam:(id)a2 completation:(id /* block */)a3;
+ (void)showLiveRoomWithUserName:(id)a0 feedExportId:(id)a1 feedNonceId:(id)a2 fromVC:(id)a3 timeout:(double)a4 customParam:(id)a5 replayEntryType:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
+ (void)showLiveRoomWithUserName:(id)a0 feedExportIdArray:(id)a1 selectedIdIndex:(int)a2 feedNonceId:(id)a3 fromVC:(id)a4 timeout:(double)a5 customParam:(id)a6 replayEntryType:(id)a7 successBlock:(id /* block */)a8 failBlock:(id /* block */)a9;
+ (void)realShowLiveRoomWithUserName:(id)a0 feedExportId:(id)a1 feedNonceId:(id)a2 fromVC:(id)a3 verifyInfo:(id)a4 scenenote:(id)a5 timeout:(double)a6 showRecommend:(BOOL)a7 customParam:(id)a8 replayEntryType:(id)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
+ (void)invokeToOpenLive:(id /* block */)a0 dataItem:(id)a1;
+ (void)showLiveRoomWithUserName:(id)a0 feedExportIdArray:(id)a1 selectedIdIndex:(int)a2 feedNonceId:(id)a3 fromVC:(id)a4 verifyInfo:(id)a5 scenenote:(id)a6 timeout:(double)a7 customParam:(id)a8 replayEntryType:(id)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
+ (void)getTemplateLiveUrlWithEncryptedID:(id)a0 nonceID:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
+ (void)getFinderLiveMicInfoWithEncryptedId:(id)a0 nonceId:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;

@end
