@interface AWESideBarPrintUtil : NSObject

+ (id)businessIDForClass:(Class)a0 selector:(SEL)a1;
+ (void)asyncPrintSideBarData:(id)a0 fromClass:(Class)a1 selector:(SEL)a2;
+ (void)printFunctionModel:(id)a0 fromClass:(Class)a1 selector:(SEL)a2;
+ (void)printSideBarModel:(id)a0 fromClass:(Class)a1 selector:(SEL)a2;
+ (BOOL)sideBarLoopPrintEnabled;
+ (void)printAbstract:(id)a0 scope:(id)a1 fromClass:(Class)a2 selector:(SEL)a3;
+ (void)printSideBarData:(id)a0 fromClass:(Class)a1 selector:(SEL)a2;
+ (void)loopPrintString:(id)a0 scope:(id)a1;
+ (unsigned long long)sideBarLoopPrintStep;
+ (id)safeStringFromClass:(Class)a0;
+ (id)safeStringFromSelector:(SEL)a0;

@end
