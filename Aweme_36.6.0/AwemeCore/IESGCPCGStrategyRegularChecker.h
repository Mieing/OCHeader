@interface IESGCPCGStrategyRegularChecker : NSObject

+ (BOOL)checkArrayRegular:(id)a0 string:(id)a1;
+ (BOOL)isElementEqual:(id)a0 toString:(id)a1;
+ (BOOL)isElementContained:(id)a0 byString:(id)a1;
+ (BOOL)isElementEqual:(id)a0 toNumer:(id)a1;
+ (BOOL)checkNumberRegular:(id)a0 value:(id)a1;
+ (BOOL)checkBOOLRegular:(id)a0 value:(BOOL)a1;
+ (BOOL)checkStringRegular:(id)a0 value:(id)a1;
+ (BOOL)checkArrayRegular:(id)a0 number:(id)a1;

@end
