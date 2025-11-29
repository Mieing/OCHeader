@class NSString;

@interface MBNonFlattenedFileSystem : DefaultFileSystem {
    NSString *mBizName;
    NSString *mPathPrefix;
}

- (id)initWithPkgPath:(id)a0 prefix:(id)a1;
- (void)dealloc;
- (BOOL)access:(id)a0 error:(id *)a1;
- (BOOL)mkdir:(id)a0 recursive:(BOOL)a1 error:(id *)a2;
- (BOOL)rmdir:(id)a0 recursive:(BOOL)a1 native:(BOOL)a2 error:(id *)a3;
- (id)readDir:(id)a0 error:(id *)a1;
- (id)stat:(id)a0 recursive:(BOOL)a1 error:(id *)a2;
- (BOOL)unlink:(id)a0 error:(id *)a1;
- (BOOL)unzip:(id)a0 targetDirectory:(id)a1 native:(BOOL)a2 error:(id *)a3;
- (id)readFile:(id)a0 position:(long long)a1 length:(long long)a2 error:(id *)a3;
- (BOOL)writeFile:(id)a0 data:(id)a1 isAppend:(BOOL)a2 error:(id *)a3;
- (BOOL)saveFile:(id)a0 specifiedPath:(id)a1 error:(id *)a2;
- (BOOL)accept:(id)a0;
- (id)traversePath:(id)a0;
- (void).cxx_destruct;

@end
