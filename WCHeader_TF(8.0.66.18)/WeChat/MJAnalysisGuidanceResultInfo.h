@class MJAssetAnalysisReportInfo, MJVolumeAnalysisResult;

@interface MJAnalysisGuidanceResultInfo : NSObject

@property (readonly, nonatomic) MJAssetAnalysisReportInfo *reportInfo;
@property (readonly, nonatomic) MJVolumeAnalysisResult *volumeResult;

- (id)initWithReportInfo:(id)a0 volumeResult:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
