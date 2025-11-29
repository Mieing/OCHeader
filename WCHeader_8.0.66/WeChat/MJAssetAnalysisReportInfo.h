@interface MJAssetAnalysisReportInfo : NSObject

@property (readonly, nonatomic) long long realShotAssetCount;
@property (readonly, nonatomic) long long totalAssetCount;

+ (id)emptyReportInfo;

- (id)initWithRealShotAssetCount:(long long)a0 totalAssetCount:(long long)a1;
- (void)fillWithReportInfo:(id)a0;
- (id)description;

@end
