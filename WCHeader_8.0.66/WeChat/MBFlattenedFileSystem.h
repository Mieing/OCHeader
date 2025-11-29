@interface MBFlattenedFileSystem : MBNonFlattenedFileSystem

- (void)dealloc;
- (id)readDir:(id)a0 error:(id *)a1;
- (BOOL)unlink:(id)a0 error:(id *)a1;
- (BOOL)unzip:(id)a0 targetDirectory:(id)a1 native:(BOOL)a2 error:(id *)a3;
- (BOOL)writeFile:(id)a0 data:(id)a1 isAppend:(BOOL)a2 error:(id *)a3;
- (BOOL)saveFile:(id)a0 specifiedPath:(id)a1 error:(id *)a2;
- (BOOL)accept:(id)a0;
- (id)readHomeDir:(id)a0;
- (void)readFilesOfDirectoryAtPath:(id)a0 localIDPrefix:(id)a1 array:(id)a2;

@end
