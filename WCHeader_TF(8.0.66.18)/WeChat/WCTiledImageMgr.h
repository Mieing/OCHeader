@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WCTiledImageMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tileImageQueue;
@property (retain, nonatomic) NSMutableDictionary *imageTasks;
@property (retain, nonatomic) NSMutableDictionary *imageDatas;
@property (nonatomic) BOOL enableHDR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)createTileTaskWithImageData:(id)a0 tileSize:(struct CGSize { double x0; double x1; })a1 complete:(id /* block */)a2;
- (void)stopTask:(id)a0;
- (void)getTileImageWithTaskId:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 complete:(id /* block */)a3;
- (void)_getTileImageWithTaskId:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 complete:(id /* block */)a2;
- (id)cpKey:(id)a0;
- (id)stringFromTileRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tileImagePath:(id)a0;
- (id)tileImagePath:(id)a0 tileRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)tileImageIfNeed:(id)a0;
- (BOOL)isPNGImage:(id)a0;
- (id)cropImage:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)resizeImage:(id)a0 withScale:(double)a1 complete:(id /* block */)a2;
- (void).cxx_destruct;

@end
