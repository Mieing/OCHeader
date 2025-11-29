@class NSString;

@interface MJAssetAnalysisReportInfoModel : NSObject <PBCoding>

@property (nonatomic) long long realShotAssetCount;
@property (nonatomic) long long totalAssetCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_realShotAssetCount;
+ (void)PBArrayAdd_totalAssetCount;
+ (void)initialize;
+ (id)modelWithReportInfo:(id)a0;

- (id)getPBPropertyTable;
- (id)toReportInfo;

@end
