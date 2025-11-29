@protocol DTFFaceViewProtocol;

@interface APBToygerPresentTask : APBToygerBaseTask

@property (retain, nonatomic) id<DTFFaceViewProtocol> faceView;

- (void)_checkAuth;
- (void)invokeWithPipeInfo:(id)a0;
- (void)processEvent:(id)a0 withCompletionCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)presentAnimated:(BOOL)a0 completion:(id /* block */)a1;

@end
