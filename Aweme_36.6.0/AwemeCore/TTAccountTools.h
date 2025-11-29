@interface TTAccountTools : NSObject

+ (id)generateTraceFromClass:(Class)a0 func:(const char *)a1;
+ (BOOL)shouldEnableGuardForRequestPath:(id)a0 excludePaths:(id)a1 includePaths:(id)a2 includePathPrefix:(id)a3;
+ (long long)millisecondFromTimeInterval;
+ (id)maskHalfString:(id)a0;
+ (double)mediaMilliseconds;
+ (BOOL)shouldEnableGuardForRequestPath:(id)a0 excludePaths:(id)a1 excludePrefix:(id)a2 includePaths:(id)a3 includePathPrefix:(id)a4;
+ (id)maskUserId:(id)a0;
+ (id)maskToken:(id)a0;
+ (id)maskString:(id)a0 minLength:(unsigned long long)a1 showLength:(unsigned long long)a2;
+ (double)internalMilliseconds;
+ (long long)systemUpTime;

@end
