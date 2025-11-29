@class NSMutableDictionary;

@interface IESGurdApplyPackageManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *applyCompletionDictionary;

+ (id)sharedManager;

- (void)onOdrUnzip:(id)a0 tempDirectory:(id)a1 completion:(id /* block */)a2;
- (id)moveResources:(id)a0 channel:(id)a1 tempDirectory:(id)a2;
- (void)saveOdrMeta:(id)a0 channel:(id)a1;
- (void)reportOdrResult:(id)a0 channel:(id)a1 error:(id)a2;
- (void)applyOdrMultiChannel:(id)a0 completion:(id /* block */)a1;
- (void)saveActiveMetaData:(id)a0;
- (void)reportApplyResult:(BOOL)a0 error:(id)a1 model:(id)a2;
- (void)applyZstdPackage:(id)a0 completion:(id /* block */)a1;
- (void)unzipWebCache:(id)a0 zipFilePath:(id)a1 completion:(id /* block */)a2;
- (void)applySingleFile:(id)a0 completion:(id /* block */)a1;
- (void)patchZstd:(id)a0 patch:(id)a1 completion:(id /* block */)a2;
- (void)updateResources:(id)a0 tempDirectory:(id)a1 completion:(id /* block */)a2;
- (void)applyPackage:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
