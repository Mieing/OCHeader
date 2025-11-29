@class NSString, GameHaowanDatabaseHelper, NSMutableDictionary;

@interface GameHaowanPostMgr : MMUserService <MMServiceProtocol, GameHaowanUploadTaskDelegate>

@property (retain, nonatomic) GameHaowanDatabaseHelper *databaseHelper;
@property (retain, nonatomic) NSMutableDictionary *uploadTasks;
@property (retain, nonatomic) NSMutableDictionary *reportEditProps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTransferOldData;
- (void)transferVideoMedias:(id)a0 postId:(id)a1;
- (void)transferImageMedias:(id)a0 postId:(id)a1;
- (id)readPostInfo;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)stopAllUploadTask;
- (void)removeAllPost;
- (BOOL)removePost:(id)a0;
- (id)getAllPost;
- (id)getPost:(id)a0;
- (id)publishHaowanPost:(id)a0;
- (id)startTextPost:(id)a0;
- (id)startMediaPost:(id)a0;
- (id)prepareNewPost:(id)a0 continueData:(id *)a1;
- (void)startUploadTask:(id)a0 postId:(id)a1;
- (id)createUploadTask:(long long)a0 fileList:(id)a1;
- (void)handlePostFailed:(id)a0 errMsg:(id)a1 code:(long long)a2;
- (void)handlePostSucceed:(id)a0;
- (void)handlePostProgress:(id)a0 progress:(float)a1;
- (void)handlePostCanceled:(id)a0;
- (void)uploadTask:(id)a0 didSucceedWithResIds:(id)a1;
- (void)uploadTask:(id)a0 didProgressChanged:(float)a1;
- (void)updatePostFailed:(id)a0 error:(id)a1;
- (BOOL)uploadTask:(id)a0 didFailedWithError:(id)a1 canRetry:(BOOL)a2;
- (void)uploadTask:(id)a0 willRetryWithCount:(unsigned long long)a1;
- (BOOL)reachRetryLimit:(id)a0;
- (void)sendHaowanPostRequest:(id)a0 resIds:(id)a1 fileList:(id)a2;
- (id)buildPBMediaListForVideoPost:(id)a0 fileList:(id)a1 editFlag:(unsigned int)a2;
- (id)buildPBMediaListForImagePost:(id)a0 fileList:(id)a1;
- (void)resumeVideoPost:(id)a0 mediaItems:(id)a1;
- (void)resumeImagePost:(id)a0 mediaItems:(id)a1;
- (void)trackEventAddNewPost:(id)a0;
- (void)trackEventPostSucceed:(id)a0 topicId:(unsigned int)a1 postType:(long long)a2 fileList:(id)a3;
- (void)trackEventPostFailed:(id)a0 errcode:(long long)a1;
- (id)reportObjWithAction:(long long)a0;
- (id)buildTrackEventProps:(id)a0;
- (int)ssidForTrackEventSource:(long long)a0;
- (void).cxx_destruct;

@end
