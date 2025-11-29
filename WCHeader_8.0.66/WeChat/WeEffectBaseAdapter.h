@class NSString, NSDictionary, NSOperationQueue, MMWeEffectManager, NSMutableArray, NSObject;
@protocol WeEffectBaseAdapterDelegate;

@interface WeEffectBaseAdapter : NSObject

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *baseURL;
@property (weak, nonatomic) NSObject<WeEffectBaseAdapterDelegate> *delegate;
@property (retain, nonatomic) NSMutableArray *imgFetchArray;
@property (retain, nonatomic) NSMutableArray *zipFetchArray;
@property (retain, nonatomic) NSOperationQueue *queueCustomEffect;
@property (retain, nonatomic) NSDictionary *param;
@property (weak, nonatomic) MMWeEffectManager *weeffectManager;

+ (id)weeffectType;

- (id)initWithAppID:(id)a0 baseURL:(id)a1 param:(id)a2 weeffectManager:(id)a3 delegate:(id)a4;
- (void)load;
- (void)interrupt;
- (void)onImageFetchDone:(BOOL)a0;
- (void)onZipFetchDoneWithPath:(id)a0;
- (void)onJsonWriteDoneWithPath:(id)a0;
- (void)addImageFetchWithName:(id)a0 urlString:(id)a1 md5:(id)a2;
- (id)getImagePathWithName:(id)a0;
- (void)addZipFetchWithStickerInfo:(id)a0;
- (id)getDefaultDirectoryWithUsage:(id)a0 dirName:(id)a1;
- (id)getRootDirectory;
- (id)getDefaultDirectory;
- (id)getSystemTemporaryDirectory;
- (void)endWithErrorMessage:(id)a0;
- (void)doImageFetch;
- (void)doZipFetch;
- (void)writeJsonToDefaultDir:(id)a0;
- (void)writeJson:(id)a0 toPath:(id)a1;
- (id)convertHexColorToRGBArray:(id)a0;
- (void)fetchZipWithParam:(id)a0 toTargetDirectory:(id)a1;
- (void)unzipFileWithPath:(id)a0 targetDirectory:(id)a1 param:(id)a2;
- (BOOL)isZipDirValid:(id)a0 param:(id)a1;
- (void)loadImagePathWithURL:(id)a0 md5:(id)a1;
- (BOOL)copyFileWithPath:(id)a0 toPath:(id)a1;
- (void)setImagePathWithURL:(id)a0 path:(id)a1;
- (void).cxx_destruct;

@end
