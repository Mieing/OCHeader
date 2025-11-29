@class NSString;

@interface DefaultFileSystem : NSObject <IMBFileSystem>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)access:(id)a0 error:(id *)a1;
- (id)readDir:(id)a0 error:(id *)a1;
- (id)stat:(id)a0 recursive:(BOOL)a1 error:(id *)a2;
- (BOOL)unlink:(id)a0 error:(id *)a1;
- (id)readFile:(id)a0 position:(long long)a1 length:(long long)a2 error:(id *)a3;
- (BOOL)writeFile:(id)a0 data:(id)a1 isAppend:(BOOL)a2 error:(id *)a3;
- (BOOL)mkdir:(id)a0 recursive:(BOOL)a1 error:(id *)a2;
- (BOOL)rmdir:(id)a0 recursive:(BOOL)a1 native:(BOOL)a2 error:(id *)a3;
- (BOOL)accept:(id)a0;
- (BOOL)unzip:(id)a0 targetDirectory:(id)a1 native:(BOOL)a2 error:(id *)a3;
- (BOOL)saveFile:(id)a0 specifiedPath:(id)a1 error:(id *)a2;

@end
