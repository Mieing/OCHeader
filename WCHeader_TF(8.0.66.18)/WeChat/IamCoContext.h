@interface IamCoContext : NSObject

+ (BOOL)isRunInCoContext;
+ (id)currentContext;
+ (id)lastContext;
+ (void)push:(id)a0;
+ (void)pop:(id)a0;
+ (void)setContext:(id)a0 atIndex:(unsigned long long)a1;

@end
