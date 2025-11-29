@class AVAssetReader;

@interface BDUGVideoDecode : NSObject

@property (retain, nonatomic) AVAssetReader *reader;

- (BOOL)readWithAsset:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 bufferBlock:(id /* block */)a2 complete:(id /* block */)a3;
- (BOOL)read:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 bufferBlock:(id /* block */)a2 complete:(id /* block */)a3;
- (void).cxx_destruct;
- (void)stop;
- (void)dealloc;

@end
