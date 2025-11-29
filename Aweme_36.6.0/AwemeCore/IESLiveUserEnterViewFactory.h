@class NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveUserEnterViewFactory : NSObject

@property (nonatomic) BOOL reduceUserEnterRoomAnimationFPS;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageIOQueue;
@property (nonatomic) BOOL isGameRoom;
@property (nonatomic) BOOL shouldShowVideoScenePattern;

- (void)createWithNode:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (id)imagesFromPieces:(id)a0;
- (void)_createViewFrom:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (id)_webPDecoderWithEffectID:(unsigned long long)a0;
- (void)_loadImagesWithURLs:(id)a0 completion:(id /* block */)a1;
- (void)_loadImagesWithImageModel:(id)a0 completion:(id /* block */)a1;
- (void)loadVideoLayerResourcesWithNode:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
