@interface BDPathHelper : NSObject

+ (BOOL)exitDir:(id)a0;
+ (BOOL)createDirIfNotExistPath:(id)a0;
+ (BOOL)deleteDirIfExistPath:(id)a0;
+ (BOOL)moveFileItem:(id)a0 toDirPath:(id)a1 error:(id *)a2;
+ (BOOL)moveDirItems:(id)a0 toDirPath:(id)a1 error:(id *)a2;

@end
