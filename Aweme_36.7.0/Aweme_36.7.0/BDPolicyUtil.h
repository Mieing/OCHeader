@interface BDPolicyUtil : NSObject

+ (double)getRelativeTime;
+ (unsigned long long)compareVersion:(id)a0 toVersion:(id)a1;
+ (double)getIncrementTime;
+ (BOOL)shouldIgnoreSymbol:(id)a0 withFilterClasses:(id)a1;
+ (id)callbackStacksWithFilterClasses:(id)a0;
+ (id)appVersion;

@end
