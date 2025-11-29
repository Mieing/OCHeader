@interface DIRSUtilities : NSObject

+ (id)ensureDirectory:(id)a0;
+ (BOOL)isObject:(id)a0 isEqualTo:(id)a1;
+ (BOOL)isDictionary:(id)a0 isEqualTo:(id)a1;
+ (BOOL)isArray:(id)a0 isEqualTo:(id)a1;
+ (id)timeParser:(double)a0;
+ (id)dateParser:(double)a0;
+ (void)measureExecution:(id /* block */)a0 completion:(id /* block */)a1;
+ (id)rootDirectory;

@end
