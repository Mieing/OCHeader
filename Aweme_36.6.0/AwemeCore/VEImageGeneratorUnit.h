@class NSString, HTSVideoData, HTSGLContext, VEVideoReaderUnit, NSObject;
@protocol OS_dispatch_queue, VEFetchAssetProtocol;

@interface VEImageGeneratorUnit : VEUnitObject <IVEScreenShot>

@property (retain, nonatomic) VEVideoReaderUnit *videoReaderUnit;
@property (weak, nonatomic) id /* block */ lastBlock;
@property (retain, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) id<VEFetchAssetProtocol> assetFetch;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (nonatomic) double videoStreamStartTime;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getPreviewImageWithConfig:(id)a0 Block:(id /* block */)a1;
- (void)getImageAtTime:(double)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 needProcess:(BOOL)a2 isLastImage:(BOOL)a3 compeletion:(id /* block */)a4;
- (void)getImageWithVideoDataAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 preferredSize:(struct CGSize { double x0; double x1; })a1 needProcess:(BOOL)a2 isMV:(BOOL)a3 isLastImage:(BOOL)a4 compeletion:(id /* block */)a5;
- (void)getImageWithVideoDataAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 preferredSize:(struct CGSize { double x0; double x1; })a1 needProcess:(BOOL)a2 isMV:(BOOL)a3 isLastImage:(BOOL)a4 compeletion:(id /* block */)a5 cancelLastRequest:(BOOL)a6;
- (void)getEffectImageAtTime:(double)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 compeletion:(id /* block */)a2;
- (void)getImageAtTime:(double)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 needProcess:(BOOL)a2 compeletion:(id /* block */)a3;
- (void)getImageWithVideoDataAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 preferredSize:(struct CGSize { double x0; double x1; })a1 needProcess:(BOOL)a2 isMV:(BOOL)a3 compeletion:(id /* block */)a4;
- (BOOL)setConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)dealloc;

@end
