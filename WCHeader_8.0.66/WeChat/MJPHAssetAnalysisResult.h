@class MJAssetAnalysisReportInfo;

@interface MJPHAssetAnalysisResult : NSObject

@property (readonly, nonatomic) BOOL isEdited;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) MJAssetAnalysisReportInfo *reportInfo;

- (id)initWithIsEdited:(BOOL)a0 isScreenshot:(BOOL)a1 reportInfo:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
