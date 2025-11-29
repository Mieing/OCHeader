@interface BDECPigeonTIMXLogPlugin : NSObject

+ (id)sharedInstance;

- (void)logMessage:(id)a0 withLevel:(unsigned long long)a1 withTag:(id)a2 withFileName:(id)a3 withFuncName:(id)a4 withLine:(int)a5 withInstance:(id)a6;

@end
