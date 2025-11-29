@interface WCGetCallStackReportHandler : NSObject

+ (id)getCustomReportInfoWithReportID:(id)a0;
+ (id)getReportJsonDataWithCallStackString:(id)a0 withReportID:(id)a1 withDumpType:(unsigned long long)a2 withScene:(id)a3;
+ (id)getReportJsonDataWithPowerConsumeStack:(id)a0 withReportID:(id)a1 withDumpType:(unsigned long long)a2;
+ (id)getReportJsonDataWithDiskIOStack:(id)a0 withCustomInfo:(id)a1 withReportID:(id)a2 withDumpType:(unsigned long long)a3;
+ (id)getReportJsonDataWithFPSStack:(id)a0 withCustomInfo:(id)a1 withReportID:(id)a2 withDumpType:(unsigned long long)a3;
+ (id)getReportJsonDataWithCustomInfo:(id)a0 withCustomKey:(id)a1 withReportID:(id)a2 withDumpType:(unsigned long long)a3;

@end
