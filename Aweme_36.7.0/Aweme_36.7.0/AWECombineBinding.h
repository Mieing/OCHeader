@class NSPointerArray;

@interface AWECombineBinding : AWEBinding

@property (retain) NSPointerArray *subBindingArray;

- (void).cxx_destruct;
- (id)init;
- (void)unbind;
- (void)addHandler:(id /* block */)a0;

@end
