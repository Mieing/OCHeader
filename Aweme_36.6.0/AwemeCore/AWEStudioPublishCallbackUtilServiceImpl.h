@interface AWEStudioPublishCallbackUtilServiceImpl : NSObject <AWEStudioPublishCallbackUtilService>

- (Class)publishSuccessEventClass;
- (Class)normalVideoTaskClass;
- (Class)imageAlbumTaskClass;
- (id)keyWithUID:(id)a0;
- (id)publishViewControllerDraftID:(id)a0;
- (void)requestProductDetectPostCancelWithToken:(id)a0 completion:(id /* block */)a1;
- (id)flowWithModel:(id)a0;
- (void)requestProductDetectPostCancelWithCompletion:(id)a0;
- (id)publishTrackerWithModel:(id)a0;
- (Class)publishEditServiceManagerClass;

@end
