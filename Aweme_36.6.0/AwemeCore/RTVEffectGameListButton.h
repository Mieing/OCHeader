@protocol RxInjector;

@interface RTVEffectGameListButton : UIButton

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) long long style;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;

@end
