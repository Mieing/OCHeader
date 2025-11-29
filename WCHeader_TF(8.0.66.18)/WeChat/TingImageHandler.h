@interface TingImageHandler : NSObject

@property (weak, nonatomic) id observer;
@property (copy, nonatomic) id /* block */ completion;

+ (id)handlerWithObserver:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;

@end
