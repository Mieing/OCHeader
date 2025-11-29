@interface AWESearchDynamicTraceManager : NSObject

+ (void)instantWithName:(id)a0;
+ (void)beginSectionWithName:(id)a0;
+ (void)beginSectionWithName:(id)a0 debugInfo:(id)a1;
+ (void)endSectionWithName:(id)a0;
+ (void)endSectionWithName:(id)a0 debugInfo:(id)a1;
+ (void)instantWithLogData:(id)a0;
+ (void)endSection;

@end
