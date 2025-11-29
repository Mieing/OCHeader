@class MMLRUCache, NSString;

@interface TextStateEffectManager : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) MMLRUCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (id)syncGenerateBlurredImage:(id)a0 parameter:(id)a1;
- (void)asyncGenerateBlurredImage:(id)a0 parameter:(id)a1 completion:(id /* block */)a2;
- (id)blurCIImage:(id)a0;
- (id)blurCIImage:(id)a0 type:(long long)a1;
- (id)generateBlurredImage:(id)a0 type:(long long)a1;
- (void).cxx_destruct;

@end
