@class MTKTextureLoader, NSThread, NSCondition, NSError, NSLock, NSObject;
@protocol OS_dispatch_queue, MTLDevice, MTLTexture;

@interface IESMMPosterNNSR : NSObject {
    void *operationQueueKey;
    BOOL _skipProcess;
    struct ILensEngineInterface { void /* function */ **x0; } *_lenEngine;
    struct ILensFlowGraphInterface { void /* function */ **x0; } *_flowGraph;
    struct vector<PosterSREvent *, std::allocator<PosterSREvent *>> { struct PosterSREvent **__begin_; struct PosterSREvent **__end_; struct __compressed_pair<PosterSREvent **, std::allocator<PosterSREvent *>> { struct PosterSREvent **__value_; } __end_cap_; } eventQue;
    id<MTLDevice> _device;
    id<MTLTexture> _rgbaTex;
    MTKTextureLoader *_loader;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSLock *predictLock;
@property (retain, nonatomic) NSCondition *eventCondition;
@property (nonatomic) BOOL isInitFinished;
@property (retain, nonatomic) NSThread *NetForwardThread;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isLoop;

+ (id)sharedInstance;
+ (void)releaseSharedInstance;

- (BOOL)isNeedsImageSR:(id)a0;
- (void)Net_Forward:(id)a0 completetion:(id /* block */)a1;
- (void *)imageDataFromUIImage:(id)a0 width:(int *)a1 height:(int *)a2 isNeedsPoster:(BOOL *)a3;
- (void)Net_Forward;
- (void)init_model;
- (void)pushEvent:(id)a0 inTex:(id)a1 completetion:(id /* block */)a2;
- (id)process:(id)a0 inTex:(id)a1 outNeedsProcess:(BOOL *)a2 outError:(id *)a3;
- (BOOL)isNeedsPostProcess:(int)a0 height:(int)a1 outW:(int *)a2 outH:(int *)a3;
- (void)runAsync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (void)notification:(id)a0;
- (struct PosterSREvent { id x0; void *x1; id x2; int x3; int x4; id /* block */ x5; } *)getEvent;

@end
