@interface WCAdvertiseRecStatLogic : NSObject

+ (unsigned int)getExposureCgiFuncBySrc:(long long)a0;
+ (unsigned int)getClickCgiFuncBySrc:(long long)a0;
+ (void)reportADLog:(unsigned int)a0 logExt:(id)a1 source:(long long)a2;
+ (BOOL)shouldForbidReportLogId:(unsigned int)a0 bySrc:(long long)a1;
+ (unsigned int)getRealLogId:(unsigned int)a0 bySrc:(long long)a1;
+ (BOOL)shouldReportByAdlogCgi:(unsigned int)a0;

@end
