@interface WCDumpReportDataProvider : NSObject

+ (id)getTodayOneReportDataWithLimitType:(id)a0 withLimitReportID:(id)a1;
+ (id)getAllTypeReportDataWithDate:(id)a0;
+ (id)getReportDataWithType:(unsigned long long)a0 onDate:(id)a1;
+ (id)getDumpReportDataWithDumpType:(unsigned long long)a0;
+ (id)getDumpReportDataWithDumpType:(unsigned long long)a0 withDate:(id)a1;
+ (id)getDumpReportDataWithDumpType:(unsigned long long)a0 withDate:(id)a1 withLimitReportIDs:(id)a2;

@end
