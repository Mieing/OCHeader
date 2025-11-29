@class NSString;

@interface AWECodeGenPerformanceAnalysisModel : AWEBaseDataModel

@property (nonatomic) int kpsCode;
@property (nonatomic) double kpsTime;
@property (copy, nonatomic) NSString *vCreativeId;
@property (copy, nonatomic) NSString *reqId;
@property (nonatomic) long long costTimeMs;
@property (copy, nonatomic) NSString *runtInfos;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
