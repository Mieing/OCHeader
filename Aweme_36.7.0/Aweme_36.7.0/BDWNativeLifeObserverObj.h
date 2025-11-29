@interface BDWNativeLifeObserverObj : NSObject

@property (copy, nonatomic) id /* block */ destructAction;

- (void).cxx_destruct;
- (void)dealloc;

@end
