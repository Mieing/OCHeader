@class __end_, __begin_, __cap_, UIViewController;
@protocol IESECShopProductsEnvironmentalContext;

@interface IESECShopProductsSharedContext : NSObject {
    struct stack<UIViewController<IESECShopProductsEnvironmentalContext> *__weak, std::deque<UIViewController<IESECShopProductsEnvironmentalContext> *__weak>> { struct deque<UIViewController<IESECShopProductsEnvironmentalContext> *__weak, std::allocator<UIViewController<IESECShopProductsEnvironmentalContext> *__weak>> { struct __split_buffer<UIViewController<IESECShopProductsEnvironmentalContext> *__weak *, std::allocator<UIViewController<IESECShopProductsEnvironmentalContext> *__weak *>> { __begin_ ***__first_; __end_ ***x0; __cap_ ***x1; id **x2; } __map_; unsigned long long __start_; unsigned long long __size_; } c; } _viewControllers;
}

@property (retain, nonatomic) UIViewController<IESECShopProductsEnvironmentalContext> *currentViewController;

+ (id)sharedInstance;

- (void)addViewController:(id)a0;
- (void)removeTopViewController;
- (void)initializePitayaMessageHandler;
- (void)removePitayaMessageHandler;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
