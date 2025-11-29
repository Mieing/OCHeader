@class NSMutableArray, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionBaseViewControllerProtocol;

@interface AWEShowMonetizeAOOPInterceptorManager : NSObject

@property (retain, nonatomic) NSMutableArray *interceptors;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionBaseViewControllerProtocol, AWEPlayInteractionViewControllerProtocol> *container;

- (void)addInterceptor:(id)a0;
- (void)removeInterceptor:(id)a0;
- (id)shouldIntercept;
- (void)removeInterceptorForType:(unsigned long long)a0;
- (void)removeAllInterceptor;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
