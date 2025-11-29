@interface MMLiveStorageScanner : NSObject

+ (id)scanPaths:(id)a0 enableVerboseLogging:(BOOL)a1;
+ (struct { id x0; unsigned long long x1; unsigned long long x2; })scanWithPathComponents:(id)a0 relativeToDirectory:(id)a1 withSharedFileReferences:(id)a2 atLevel:(unsigned long long)a3 enableVerboseLogging:(BOOL)a4;
+ (id)findOrCreateSubdirectoryInDirectory:(id)a0 withName:(id)a1 enableVerboseLogging:(BOOL)a2;
+ (struct { id x0; unsigned long long x1; unsigned long long x2; })scanSubdirectory:(id)a0 inDirectory:(id)a1 withSharedFileReferences:(id)a2 enableVerboseLogging:(BOOL)a3;
+ (struct { id x0; unsigned long long x1; unsigned long long x2; })scanFile:(id)a0 inDirectory:(id)a1 withSharedFileReferences:(id)a2 enableVerboseLogging:(BOOL)a3;

@end
