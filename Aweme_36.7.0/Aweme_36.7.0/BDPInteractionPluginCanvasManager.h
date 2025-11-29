@class BDPAppCanvasBaseInstance, NSMutableDictionary, NSString, BDPUniqueID, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPInteractionPluginCanvasManager : NSObject <BDPAppCanvasBaseInstanceDelegate> {
    NSObject<OS_dispatch_semaphore> *_canvasLock;
}

@property (retain, nonatomic) NSMutableDictionary *canvasDic;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPAppCanvasBaseInstance *canvasInstance;
@property (nonatomic) long long engineType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getEngineTypeFromSetting;

- (unsigned long long)loadTimeout;
- (BOOL)enablePause;
- (void)onFirstFrameReadyWithDuration:(double)a0;
- (void)addCanvasWithCanvasID:(id)a0 cardModel:(id)a1;
- (void)removeCanvasWithCanvasID:(id)a0;
- (void)removeAllCanvas;
- (void)updateCanvasStatusWithCanvasID:(id)a0 isShow:(BOOL)a1;
- (void)updateCanvasSizeWithCanvasID:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)hasAliveCanvas;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;

@end
