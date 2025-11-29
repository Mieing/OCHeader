@class NSString;

@interface AWEMVExportSession : NSObject

@property (copy, nonatomic) NSString *presetName;
@property (copy, nonatomic) id /* block */ downloaders;
@property (readonly, nonatomic) unsigned long long assetModelCount;
@property (copy, nonatomic) NSString *outputPath;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (copy, nonatomic) NSString *fillMode;

- (void)exportAsynchronouslyWithProcessedImage:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithAssetModels:(id)a0 presetName:(id)a1;
- (id)initWithImageDownloaders:(id)a0 presetName:(id)a1;
- (id)initWithImage:(id)a0 presetName:(id)a1;
- (id)p_processImageWithBlackEdgeWithOutputSize:(struct CGSize { double x0; double x1; })a0 sourceImage:(id)a1;
- (void)p_saveUIImages:(id)a0 toSandboxWithCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
