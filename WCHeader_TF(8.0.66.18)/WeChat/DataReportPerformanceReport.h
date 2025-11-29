@interface DataReportPerformanceReport : NSObject

+ (void)reportPageStorage:(id)a0;
+ (void)reportStackSize:(unsigned long long)a0;
+ (void)reportSessionStayInfoSize:(unsigned long long)a0;
+ (void)reportPageStayInfoSize:(unsigned long long)a0;
+ (void)reportHookFail:(unsigned long long)a0;
+ (void)reportLengthLimit:(unsigned int)a0;
+ (void)reportPageRecycle:(id)a0;
+ (BOOL)isOpenPerformanceReport;

@end
