@class MJAssetAnalysisReportInfo, MJVolumeAnalysisResult, MJPHAssetsAnalyzer, MJOSTAnalyzer, MJMusicAnalyzer, MJVolumeAnalyzer;

@interface MJAnalysisGuidanceManager : NSObject

@property (readonly, nonatomic) MJPHAssetsAnalyzer *phAssetsAnalyzer;
@property (readonly, nonatomic) MJOSTAnalyzer *ostAnalyzer;
@property (readonly, nonatomic) MJMusicAnalyzer *musicAnalyzer;
@property (readonly, nonatomic) MJVolumeAnalyzer *volumeAnalyzer;
@property (retain, nonatomic) MJAssetAnalysisReportInfo *reportInfo;
@property (retain, nonatomic) MJVolumeAnalysisResult *volumeResult;

- (id)init;
- (void)dealloc;
- (void)analyzeForGuidanceWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
