@class GameHaowanUploadTask, NSString;

@interface LiteAppJsApiUploadGameMediaFile : LiteAppJsApi <GameHaowanUploadTaskDelegate>

@property (retain, nonatomic) GameHaowanUploadTask *uploadTask;
@property (nonatomic) long long postType;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (id)createUploadTask:(long long)a0 fileList:(id)a1;
- (id)buildTrackEventProps:(id)a0 info:(id)a1;
- (int)ssidForTrackEventSource:(long long)a0;
- (id)generatePostId;
- (id)buildMediaList:(id)a0 postType:(long long)a1 errmsg:(id *)a2;
- (void)uploadTask:(id)a0 didSucceedWithResIds:(id)a1;
- (void)uploadTask:(id)a0 didProgressChanged:(float)a1;
- (void)updateUploadFailed:(id)a0 error:(id)a1;
- (BOOL)uploadTask:(id)a0 didFailedWithError:(id)a1 canRetry:(BOOL)a2;
- (void).cxx_destruct;

@end
