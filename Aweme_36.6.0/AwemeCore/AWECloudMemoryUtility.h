@interface AWECloudMemoryUtility : NSObject

+ (double)totalMemory;
+ (double)freeMemory:(BOOL)a0;
+ (double)usedMemory:(BOOL)a0;
+ (double)activeMemory:(BOOL)a0;
+ (double)inactiveMemory:(BOOL)a0;
+ (double)wiredMemory:(BOOL)a0;
+ (double)purgableMemory:(BOOL)a0;

@end
