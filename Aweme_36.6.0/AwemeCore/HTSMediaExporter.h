@class NSString, AVAssetExportSession;

@interface HTSMediaExporter : NSObject

@property (retain, nonatomic) AVAssetExportSession *assetExporter;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *presetName;
@property (copy, nonatomic) id exportBlock;

+ (id)exportAsset:(id)a0 audioMix:(id)a1 videoCompostion:(id)a2 saveToFile:(id)a3 presetName:(id)a4 completion:(id /* block */)a5;
+ (id)exporter;

- (BOOL)mergeAudio:(id)a0 saveToPath:(id)a1 completion:(id /* block */)a2;
- (void)cancelExporting;
- (BOOL)mergeVideoFragments:(id)a0 saveToPath:(id)a1 completion:(id /* block */)a2;
- (BOOL)conbineVideoAndAudio:(id)a0 waterMarkExporter:(id)a1 saveToPath:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)video:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
