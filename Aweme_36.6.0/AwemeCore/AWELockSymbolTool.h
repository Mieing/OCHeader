@interface AWELockSymbolTool : NSObject

+ (void)getMainThreadID;
+ (id)getCachedSymbolNameByAddress:(unsigned long long)a0;
+ (void)cacheSymbolName:(id)a0 withAddress:(unsigned long long)a1;
+ (id)symbolNameOfThread:(id)a0;

@end
