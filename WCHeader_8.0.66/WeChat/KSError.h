@interface KSError : NSObject

+ (id)errorWithDomain:(id)a0 code:(long long)a1 description:(id)a2;
+ (BOOL)fillError:(id *)a0 withDomain:(id)a1 code:(long long)a2 description:(id)a3;
+ (BOOL)clearError:(id *)a0;

@end
