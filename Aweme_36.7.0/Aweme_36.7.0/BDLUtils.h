@interface BDLUtils : NSObject

+ (void)event:(id)a0 params:(id)a1;
+ (void)trackData:(id)a0 logTypeStr:(id)a1;
+ (void)trackService:(id)a0 value:(float)a1 extra:(id)a2;
+ (void)openSchema:(id)a0;
+ (void)reportLog:(id)a0;
+ (void)fatal:(id)a0;
+ (void)logToSystem:(id)a0;
+ (id)bdl_md5StringOfString:(id)a0;
+ (void)error:(id)a0;
+ (void)info:(id)a0;
+ (void)warn:(id)a0;

@end
