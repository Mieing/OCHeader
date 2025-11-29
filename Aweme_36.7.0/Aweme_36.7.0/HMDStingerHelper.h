@interface HMDStingerHelper : NSObject

@property (class, readonly) HMDStingerHelper *shared;

- (id)exchangeBlockWithSignature:(const char *)a0 body:(id /* block */)a1;
- (BOOL)exchangeMethod:(id)a0 block:(id /* block */)a1;
- (id)asyncExchangeBlockWithSignature:(const char *)a0 body:(id /* block */)a1;
- (BOOL)exchangeMethod:(id)a0 stingerBlock:(id)a1;
- (BOOL)exchangeMethod:(id)a0 asyncBlock:(id /* block */)a1;

@end
