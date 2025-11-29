@class RTVVoipViewsController;
@protocol RxInjector;

@interface RTVVoipEnginePreloader : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) RTVVoipViewsController *viewsController;

- (void)renderModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
