@interface WCNewClickStatUtility : MMObject

+ (id)getReportDataDir;
+ (id)getUsrReportDataDir;
+ (id)getReportConfigFilePath;
+ (unsigned int)UinHash:(unsigned int)a0;
+ (void)unCompressSrcDataWithLen:(id)a0 dest:(id)a1 length:(long long)a2;
+ (id)getPageStatDataCheckFilePath;
+ (id)shortenPageID:(id)a0;
+ (unsigned int)getNewContexID:(unsigned int)a0;
+ (unsigned int)calCostTimeFrom:(struct timeval { long long x0; int x1; })a0;
+ (id)getWidgetRecordDataDir;
+ (id)getWidgetRecordDataFileByPageID:(id)a0 andTimeStamp:(unsigned int)a1;
+ (id)getCalcSessionType:(id)a0;

@end
