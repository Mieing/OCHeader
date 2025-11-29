@class NSThread, BDPUniqueID, BDPRuntime;

@interface BDPCanvasEngineBaseInstance : NSObject

@property (nonatomic) float pixelRatio;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) BDPRuntime *runtime;
@property (retain) NSThread *currentThread;

- (void)pauseInstance;
- (void)resumeInstance;
- (void)stopInstance;
- (id)getRuntime;
- (void)setupEngineIfNeededWithCompletion:(id /* block */)a0;
- (void)doResume;
- (void)doStop;
- (void)setupCustomRegisterService;
- (void)setupCustomService;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;
- (void)doPause;
- (void)clearInstance;

@end
