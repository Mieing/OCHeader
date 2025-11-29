@class IESLiveFPSReportConfig, IESLiveMemoryReportConfig;

@interface IESLiveAPMReportConfig : NSObject

@property (retain, nonatomic) IESLiveFPSReportConfig *fpsReportConfig;
@property (retain, nonatomic) IESLiveMemoryReportConfig *memoryReportConfig;

- (id)toDic;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
