@class NSString, CAKModalTransitionDelegate;

@interface AWEStudioAlbumRouterService : NSObject <AWEStudioAlbumService, AWEStudioAlbumCreationService>

@property (retain, nonatomic) CAKModalTransitionDelegate *albumTransitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openAlbumWithConfigure:(id)a0 bizName:(id)a1 callerBiz:(id)a2 extraInfo:(id)a3 trackerInfoInject:(id /* block */)a4 completion:(id /* block */)a5;
- (void)openMainRecordAlbumWithPublishModel:(id)a0 extraInfo:(id)a1 configure:(id /* block */)a2;
- (void).cxx_destruct;

@end
