@class AWEVideoPublishViewModel;

@interface AWECanvasVideoCreator : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) id /* block */ customerTransitioningSetting;

- (void)configPublishModel:(id)a0;
- (id)localMusicAssetForURL:(id)a0;
- (void)updatePublishModelForDetailMusic:(id)a0;
- (void)exportVideoWithImage:(id)a0 beforeEnterNextPage:(id /* block */)a1 completionBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (void)exportVideoWithLocalVideoURL:(id)a0 musicModel:(id)a1 beforeEnterNextPage:(id /* block */)a2 completionBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)openEditor:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)exportVideoWithImage:(id)a0 beforeEnterNextPage:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)exportVideoWithLocalVideoURL:(id)a0 musicModel:(id)a1 beforeEnterNextPage:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
