@class NSString, BDLOCSonicInstance;
@protocol BDLOCSonicLoadListener;

@interface BDLOCSonicLoadStrategy : NSObject <BDPInteractGameDelegate, BDLiveOpenContainerLoadStrategy>

@property (weak, nonatomic) id<BDLOCSonicLoadListener> listener;
@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) BDLOCSonicInstance *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadWithSchema:(id)a0;

- (BOOL)supportTechType:(long long)a0;
- (id)preloadWithSchema:(id)a0 params:(id)a1 listener:(id)a2;
- (id)executeWithSchema:(id)a0 params:(id)a1 listener:(id)a2;
- (void)setupEnvWithSchema:(id)a0 listener:(id)a1;
- (void)_loadMessageDelegateForApp:(id)a0 params:(id)a1;
- (void)interactGame:(id)a0 loadPogress:(double)a1;
- (void)interactGame:(id)a0 didFinishLoadWithResult:(BOOL)a1 error:(id)a2;
- (void)interactGame:(id)a0 didLoadConfig:(id)a1;
- (void)interactGameDidStoped:(id)a0;
- (void)interactGame:(id)a0 sendFrameBuffer:(struct __CVBuffer { } *)a1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)interactGameFinishLoadContent:(id)a0 exception:(id)a1;
- (void)interactGameFirstFrameDidShow:(id)a0;
- (void)interactGameSubContainerFirstFrameDidShow:(id)a0;
- (void).cxx_destruct;

@end
