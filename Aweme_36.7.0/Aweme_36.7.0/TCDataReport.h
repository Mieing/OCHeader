@interface TCDataReport : NSObject

+ (id)commParamValue;
+ (void)reportCheck:(id)a0 ret:(int)a1 code:(int)a2 currentModel:(id)a3 detail:(id)a4;
+ (void)getCurrentModelWithCallback:(id /* block */)a0;
+ (void)cgiLoginReport:(int)a0 reporttype:(int)a1;
+ (void)cgiOauthReportWithOpenId:(id)a0;
+ (void)cgiShareReport:(int)a0 type:(int)a1 totype:(int)a2 acttype:(int)a3 touin:(int)a4 reporttype:(int)a5 callsource:(int)a6;
+ (void)cgiStatisticReport:(int)a0 reporttype:(int)a1;
+ (void)reportCheck:(id)a0 ret:(int)a1 code:(int)a2 detail:(id)a3;

@end
