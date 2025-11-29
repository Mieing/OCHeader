@class NSString;

@interface IESLivePuzzleWebImage : NSObject <PuzzleWebImageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageCachePathForKey:(id)a0;
- (void)storeImage:(id)a0 forKey:(id)a1 toDisk:(BOOL)a2;
- (id)imageWithData:(id)a0 preloadAllFrame:(BOOL)a1;
- (id)imageFromCacheWithKey:(id)a0 needDisk:(BOOL)a1;
- (void)loadImageWithURL:(id)a0 complete:(id /* block */)a1;
- (void)loadImageWithURL:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 complete:(id /* block */)a2;
- (id)puzzleImageNamed:(id)a0;
- (id)imageDataForKey:(id)a0;

@end
