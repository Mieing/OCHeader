@class NSString;

@interface AWEParameteriedCreationImplDeprecated : HTSService <APCParameterizedCreation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_publishEnabled;
+ (void)p_notSupportPublishCallbackWithBlock:(id /* block */)a0;

- (id)startShareImageWithStoryModel:(id)a0 completion:(id /* block */)a1;
- (id)startCreatingWithEditor:(id)a0 publish:(id)a1 bizData:(id)a2 completion:(id /* block */)a3;
- (void)appendPublishTaskWithModel:(id)a0 editService:(id)a1 quickStory:(BOOL)a2;
- (id)createTaskWithConfig:(id)a0 completion:(id /* block */)a1;
- (id)createTaskWithCamera:(id)a0 album:(id)a1 editor:(id)a2 publish:(id)a3 bizData:(id)a4 completion:(id /* block */)a5;
- (id)createTaskWithEditor:(id)a0 publish:(id)a1 bizData:(id)a2 publishModel:(id)a3 completion:(id /* block */)a4;
- (void)appendPublishTaskWithModel:(id)a0 quickStory:(BOOL)a1;
- (void)showCameraWithPublishViewModel:(id)a0 completion:(id /* block */)a1;
- (void)showEditorWithPublishViewModel:(id)a0 completion:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)showEditorWithPublishViewModel:(id)a0 completion:(id /* block */)a1;
- (void)showPublishingWithPublishViewModel:(id)a0 completion:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (id)startCreatingWithCamera:(id)a0 editor:(id)a1 publish:(id)a2 bizData:(id)a3 completion:(id /* block */)a4;
- (id)startShareImageWithJSONString:(id)a0 completion:(id /* block */)a1;
- (id)startShareImageWithStoryModel:(id)a0 completion:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (id)startShareVideoWithJSONString:(id)a0 completion:(id /* block */)a1;
- (id)startShareVideoWithStoryModel:(id)a0 completion:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (id)startShareVideoWithStoryModel:(id)a0 completion:(id /* block */)a1;
- (id)startCreatingSilentlyWithEditor:(id)a0 publish:(id)a1 bizData:(id)a2 quickStory:(BOOL)a3 completion:(id /* block */)a4;
- (id)createTaskWithCamera:(id)a0 album:(id)a1 editor:(id)a2 publish:(id)a3 bizData:(id)a4 publishModel:(id)a5 completion:(id /* block */)a6;
- (BOOL)shouldUploadNonInfiniWithPublishModel:(id)a0;
- (void)uploadTaskExceptionWithPublishModel:(id)a0;
- (void)trackShowCameraWithPublishModel:(id)a0;
- (void)startShareImageWithStoryModel:(id)a0 completion:(id /* block */)a1 creationID:(id)a2 cancelBlock:(id /* block */)a3;
- (void)beginShareImagePreparationWithStoryModel:(id)a0;
- (void)checkValidAndStartShareVideoWithStoryModel:(id)a0 completion:(id /* block */)a1 creationID:(id)a2 cancelBlock:(id /* block */)a3;
- (void)startShareVideoWithStoryModel:(id)a0 completion:(id /* block */)a1 creationID:(id)a2 cancelBlock:(id /* block */)a3;

@end
