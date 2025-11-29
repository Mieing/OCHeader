@interface MMFootprintHelper : NSObject

+ (BOOL)isEnable;
+ (unsigned long long)threshold;
+ (id)jsFootprintInfo;
+ (void)addFootprintLog:(unsigned long long)a0;
+ (void)dumpToLog;

@end
