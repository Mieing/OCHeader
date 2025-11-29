@protocol KindaViewControllerRouteActionDelegate;

@interface KindaViewControllerRouteAction : NSObject

@property (copy, nonatomic) id /* block */ action;
@property (weak, nonatomic) id<KindaViewControllerRouteActionDelegate> delegate;

- (id)initWithAction:(id /* block */)a0;
- (void)run:(id)a0;
- (void).cxx_destruct;

@end
