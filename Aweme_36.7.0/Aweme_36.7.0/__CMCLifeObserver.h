@class NSString;

@interface __CMCLifeObserver : NSObject

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) id /* block */ didDealloc;
@property (weak, nonatomic) id target;

- (void)startObserving:(id)a0 didDealloc:(id /* block */)a1;
- (void).cxx_destruct;
- (void)endObserving;
- (id)init;
- (void)dealloc;

@end
