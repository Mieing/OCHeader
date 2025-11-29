@class OMJAIGCMediaFile, OMJAIGCAssetAnalysisResult;

@interface OMJAIGCRequestAsset : NSObject

@property (retain, nonatomic) OMJAIGCMediaFile *mediaFile;
@property (retain, nonatomic) OMJAIGCAssetAnalysisResult *analysisResult;

- (id)initWithMediaFile:(id)a0 analysisResult:(id)a1;
- (void).cxx_destruct;

@end
