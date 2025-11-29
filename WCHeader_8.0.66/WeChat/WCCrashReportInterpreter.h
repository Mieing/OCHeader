@interface WCCrashReportInterpreter : NSObject

+ (id)interpretReport:(id)a0;
+ (id)interpretText:(id)a0;
+ (id)p_getTextStackArray:(id)a0;
+ (id)p_getSymbolicatedStack:(id)a0;
+ (unsigned long long)getImageStartAddr:(id)a0;
+ (id)getImageUUID:(id)a0;
+ (id)p_cleanEmptyString:(id)a0;
+ (id)p_cleanAddressArray:(id)a0;
+ (id)p_getNewCrashTextString:(id)a0;
+ (id)p_getReportWithReportLineArray:(id)a0 withSymblicatedAddressArray:(id)a1 withBinaryUUID:(id)a2;
+ (BOOL)p_validStackFormat:(id)a0;
+ (id)p_getSymbolicatedLine:(id)a0 withSymblicatedAddressArray:(id)a1 withBinaryUUID:(id)a2;
+ (id)p_getSymblicatedAddressInfo:(id)a0 fromSymblicatedAddressArray:(id)a1;
+ (id)p_getAddressFromArray:(id)a0;
+ (BOOL)p_validFirstStackFormat:(id)a0;
+ (id)p_getAddressInfoFromFirstStackFormat:(id)a0;
+ (BOOL)p_validSecondStackFormat:(id)a0;
+ (id)p_getAddressInfoFromSecondStackFormat:(id)a0;
+ (BOOL)p_hasPlusPartInArray:(id)a0;
+ (id)p_getBinaryImageUUID:(id)a0;

@end
