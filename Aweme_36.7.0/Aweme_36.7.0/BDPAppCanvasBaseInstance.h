@class NSString;
@protocol BDPAppCanvasBaseInstanceDelegate;

@interface BDPAppCanvasBaseInstance : BDPCanvasEngineBaseInstance <BDPCanvasInstanceProtocol>

@property (weak, nonatomic) id<BDPAppCanvasBaseInstanceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseCanvasInstance;
- (void)resumeCanvasInstance;
- (void)stopCanvasInstance;
- (id)getRuntime;
- (void)removeDrawableView:(id)a0 completion:(id /* block */)a1;
- (void)addDrawableView:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)engineType;
- (void)clearInstance;

@end
