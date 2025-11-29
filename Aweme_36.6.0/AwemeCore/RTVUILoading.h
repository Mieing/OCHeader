@protocol RxInjector;

@interface RTVUILoading : NSObject <RTVUILoadingInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;

- (void)rxAwakeFromPropertyInjection;
- (id)showLoadingOnView:(id)a0;
- (id)showLoadingOnView:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
