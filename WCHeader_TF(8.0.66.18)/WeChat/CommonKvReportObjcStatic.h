@interface CommonKvReportObjcStatic : NSObject

+ (void)kvReport:(unsigned int)a0 value:(id)a1;
+ (void)idKvReport:(unsigned int)a0 key:(unsigned int)a1 value:(unsigned int)a2;
+ (void)reportCustomEvent:(id)a0 routeRule:(unsigned long long)a1 isRtReport:(BOOL)a2 keyArr:(id)a3 valueArr:(id)a4;
+ (void)reportCustomCgiEvent:(id)a0 bizId:(unsigned long long)a1 isBatchReport:(BOOL)a2 keyArr:(id)a3 valueArr:(id)a4;

@end
