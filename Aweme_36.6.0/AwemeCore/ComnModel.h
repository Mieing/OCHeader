@class MLModel, MLModelConfiguration;

@interface ComnModel : NSObject

@property (retain, nonatomic) MLModel *model;
@property (retain) MLModelConfiguration *mconfig;

+ (void)clearAllCache;
+ (id)cacheZipDirPath;
+ (id)applicationLibirayDirectory:(id)a0;
+ (id)applicationLibirayDirectory:(id)a0 suffix:(id)a1;
+ (id)applicationZipDirectory:(id)a0;
+ (id)cacheModleDirPath;
+ (id)getSaveZipLibirayDir:(id)a0;

- (id)compileModel:(id)a0 isHaveModel:(BOOL)a1;
- (id)initWithContent:(id)a0 disableMLE5Engine:(BOOL)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 disableMLE5Engine:(BOOL)a1 error:(id *)a2;
- (BOOL)loadModel:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)loadModel:(id)a0 disableMLE5Engine:(BOOL)a1 error:(id *)a2;
- (BOOL)loadModel:(id)a0 isHaveModel:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)loadModel:(id)a0 isHaveModel:(BOOL)a1 disableMLE5Engine:(BOOL)a2 error:(id *)a3;
- (id)moveModelcToNewUrl:(id)a0 modelName:(id)a1;
- (BOOL)zipFileAtPath:(id)a0 toDestination:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1;

@end
