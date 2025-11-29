@interface MMLimitedModeReporter : NSObject

+ (void)reportUnfocusInfo:(id)a0;
+ (void)reportToastInfo:(id)a0;
+ (void)reportAction:(long long)a0;
+ (void)reportAction:(long long)a0 scene:(long long)a1;
+ (void)reportAction:(long long)a0 bussinessName:(id)a1 beforeValue:(id)a2 afterValue:(id)a3 allbussinessSettings:(id)a4 status:(unsigned int)a5;

@end
