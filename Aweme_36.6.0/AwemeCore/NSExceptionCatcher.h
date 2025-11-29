@interface NSExceptionCatcher : NSObject

+ (void)tryBlock:(id /* block */)a0 error:(id *)a1;
+ (BOOL)catchSwiftException:(id /* block */)a0 error:(id *)a1;
+ (BOOL)catchException:(id /* block */)a0 error:(id *)a1;

@end
