@class BDPUniqueID, NSMutableDictionary;

@interface BDPPluginInfoLoadRecorder : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) NSMutableDictionary *pluginReadInfos;
@property (retain, nonatomic) NSMutableDictionary *pluginLoadInfos;
@property (retain, nonatomic) NSMutableDictionary *lastReportInfo;

- (id)initWithUniqueId:(id)a0;
- (id)getReportInfoWithRouteId:(id)a0;
- (BOOL)recordReadInfo:(id)a0;
- (void)mergeInfoFromUnisus;
- (id)getFinalPluginReportParamsWithReadArr:(id)a0 loadArr:(id)a1;
- (id)transReadModelsToDic:(id)a0;
- (id)transLoadModelsToDic:(id)a0;
- (BOOL)recordLoadInfo:(id)a0;
- (void).cxx_destruct;

@end
