@interface MMLiveStorageCleanupLogic : NSObject

+ (unsigned long long)evaluateStorageCleanup;
+ (unsigned long long)executeStorageCleanup;
+ (unsigned long long)cleanupStorageWithScenario:(unsigned long long)a0;
+ (void)markFilesWithPathComponents:(id)a0 relativeToDirectory:(id)a1 forDeviationDirectiveType:(unsigned long long)a2 atLevel:(unsigned long long)a3 enableVerboseLogging:(BOOL)a4;
+ (void)markFilesRecursivelyInDirectory:(id)a0 forDeviationDirectiveType:(unsigned long long)a1 enableVerboseLogging:(BOOL)a2;
+ (unsigned long long)cleanupFilesInDirectory:(id)a0 forScenario:(unsigned long long)a1 withFileReferences:(id)a2 enableVerboseLogging:(BOOL)a3;

@end
