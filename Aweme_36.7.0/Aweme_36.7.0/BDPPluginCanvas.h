@class NSRecursiveLock, NSString, BDPAppCanvasBaseInstance, NSMutableArray;

@interface BDPPluginCanvas : BDPBridgeInstancePlugin <UIGestureRecognizerDelegate> {
    BOOL _isDestroy;
    NSMutableArray *_drawableViews;
    BDPAppCanvasBaseInstance *_canvasInstance;
}

@property (nonatomic) long long frameID;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) long long engineType;
@property (nonatomic) BOOL webviewNewCanvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errMsgForErrCode:(long long)a0;

- (id)errorTypeForErrorCode:(long long)a0;
- (void)createCanvasEnvSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)insertCanvasWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateCanvasWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeCanvasWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
