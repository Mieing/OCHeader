@class AWELazy;

@interface AWEUITransitionHost : NSObject

@property (readonly, nonatomic) AWELazy *transitionDelegate;

- (void)presentViewController:(id)a0 animated:(BOOL)a1 changeModalPresentationStyle:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dealloc;

@end
