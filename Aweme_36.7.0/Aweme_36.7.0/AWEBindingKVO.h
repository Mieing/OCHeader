@class NSString;
@protocol NSCopying;

@interface AWEBindingKVO : NSObject

@property (copy, nonatomic) id<NSCopying> objectHashKey;
@property (copy, nonatomic) id /* block */ handler;
@property (weak, nonatomic) id object;
@property (copy, nonatomic) NSString *keyPath;

- (id)currentObjectValue;
- (void)registHandler:(id /* block */)a0;
- (void)disposeByObject:(id)a0;
- (id)hashKeyByObject:(id)a0;
- (void)addToKVOManager;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0 keyPath:(id)a1;

@end
