@interface MANetUtils : NSObject

+ (BOOL)isValidNetReqOptions:(id)a0;
+ (id)performRPCAsyncWith:(id)a0 resultCallback:(id /* block */)a1;
+ (id)performRPCSyncWith:(id)a0 error:(id *)a1;

@end
