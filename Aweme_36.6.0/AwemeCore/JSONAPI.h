@class NSString;

@interface JSONAPI : NSObject

@property (retain, nonatomic) NSString *baseURLString;

+ (void)__rpcRequestWithObject:(id)a0 completion:(id /* block */)a1;
+ (void)setAPIBaseURLWithString:(id)a0;
+ (void)getWithPath:(id)a0 andParams:(id)a1 completion:(id /* block */)a2;
+ (void)postWithPath:(id)a0 andParams:(id)a1 completion:(id /* block */)a2;
+ (void)rpcWithMethodName:(id)a0 andArguments:(id)a1 completion:(id /* block */)a2;
+ (void)rpc2WithMethodName:(id)a0 andParams:(id)a1 completion:(id /* block */)a2;
+ (void)setContentType:(id)a0;
+ (void)initialize;

- (void).cxx_destruct;

@end
