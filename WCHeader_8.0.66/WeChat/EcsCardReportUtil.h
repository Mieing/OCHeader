@interface EcsCardReportUtil : NSObject

+ (void)reportOpenCard:(int)a0 scene:(int)a1 useCache:(BOOL)a2 openSuccess:(BOOL)a3;
+ (void)reportProductCardCgiResult:(id)a0 duration:(unsigned long long)a1 result:(int)a2;
+ (void)reportShopCardCgiResult:(id)a0 duration:(unsigned long long)a1 result:(int)a2;
+ (void)reportBulkBuyCardCgiResult:(id)a0 duration:(unsigned long long)a1 result:(int)a2;
+ (void)reportCgiResult:(int)a0 reqType:(int)a1 duration:(unsigned long long)a2 cgiResult:(int)a3 params:(id)a4;
+ (id)reportDataToString:(id)a0;

@end
