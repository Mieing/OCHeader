@interface LSEventObserver : NSObject

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;

+ (id)observerWithTarget:(id)a0 seletor:(SEL)a1;

- (id)initWithTarget:(id)a0 seletor:(SEL)a1;
- (void)performEventSelectorWithObject:(id)a0;
- (void).cxx_destruct;

@end
