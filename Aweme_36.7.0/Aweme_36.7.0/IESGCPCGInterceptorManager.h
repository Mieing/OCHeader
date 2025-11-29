@class NSMutableArray, Protocol;

@interface IESGCPCGInterceptorManager : NSObject

@property (retain, nonatomic) NSMutableArray *interceptors;
@property (retain, nonatomic) Class contextClass;
@property (retain, nonatomic) Class outputClass;
@property (retain, nonatomic) Protocol *contextType;
@property (retain, nonatomic) Protocol *outputType;

- (void)addInterceptor:(id)a0;
- (id)initWithContextClass:(Class)a0 outputClass:(Class)a1;
- (void)executeWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithContextType:(id)a0 outputType:(id)a1;
- (BOOL)contextIsLegal:(id)a0;
- (void)_doExecuteChain:(id)a0 index:(unsigned long long)a1 params:(id)a2 completion:(id /* block */)a3;
- (BOOL)outputIsLegal:(id)a0;
- (void).cxx_destruct;

@end
