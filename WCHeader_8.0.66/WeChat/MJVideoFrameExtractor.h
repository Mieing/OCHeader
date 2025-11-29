@interface MJVideoFrameExtractor : NSObject

@property BOOL isCanceled;

- (id)init;
- (void)dealloc;
- (void)extractVideoFrameWithPHLocalIdentifier:(id)a0 timestamps:(id)a1 videoFrameHandler:(id /* block */)a2;
- (void)extractVideoFrameWithAVAsset:(id)a0 phLocalIdentifier:(id)a1 timestamps:(id)a2 videoFrameHandler:(id /* block */)a3;
- (void)cancel;

@end
