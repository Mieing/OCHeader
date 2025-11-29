@class UINib;
@protocol RxInjector;

@interface __RxInjectorNib : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) UINib *nib;

+ (id)nibWithNibName:(id)a0 bundle:(id)a1 injector:(id)a2;
+ (id)nibWithData:(id)a0 bundle:(id)a1 injector:(id)a2;

- (id)initWithNibName:(id)a0 bundle:(id)a1 injector:(id)a2;
- (id)initWithData:(id)a0 bundle:(id)a1 injector:(id)a2;
- (void).cxx_destruct;
- (id)instantiateWithOwner:(id)a0 options:(id)a1;

@end
