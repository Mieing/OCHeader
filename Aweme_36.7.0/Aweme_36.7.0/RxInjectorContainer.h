@protocol RxInjector;

@interface RxInjectorContainer : NSObject

@property (readonly, nonatomic) id<RxInjector> injector;

+ (void)_storeInjector:(id)a0;
+ (void)load;
+ (id)injector;

- (void).cxx_destruct;

@end
