@interface EEFileUtils : NSObject

+ (BOOL)removeItem:(id)a0 error:(id *)a1;
+ (BOOL)renameItem:(id)a0 destination:(id)a1 overridable:(BOOL)a2 error:(id *)a3;
+ (BOOL)saveImage:(id)a0 destination:(id)a1 overridable:(BOOL)a2 ignoreExists:(BOOL)a3 error:(id *)a4;
+ (BOOL)copyFile:(id)a0 destination:(id)a1 overridable:(BOOL)a2 ignoreExists:(BOOL)a3 error:(id *)a4;
+ (BOOL)copyFile:(id)a0 destination:(id)a1 overridable:(BOOL)a2 ignoreExists:(BOOL)a3;
+ (BOOL)saveImage:(id)a0 destination:(id)a1 overridable:(BOOL)a2 ignoreExists:(BOOL)a3;
+ (BOOL)mkdirs:(id)a0 error:(id *)a1;
+ (BOOL)mkdirs:(id)a0;
+ (BOOL)renameItem:(id)a0 destination:(id)a1 overridable:(BOOL)a2;
+ (BOOL)removeItem:(id)a0;

@end
