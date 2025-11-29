@interface SmcProtoBufUtil : NSObject

+ (id)toMMReportKvReq:(id)a0;
+ (id)toMMReportIdkeyReq:(id)a0;
+ (id)fillStrategyTable:(id)a0;
+ (id)toSmcReportKvResp:(id)a0;
+ (id)toSmcReportIdkeyResp:(id)a0;
+ (id)toMMGetStrategyReq;
+ (id)toSmcKVStrategyResp:(id)a0;
+ (id)toSmcIdkeyStrategyResp:(id)a0;
+ (id)toMMSelfMonitor:(id)a0;

@end
