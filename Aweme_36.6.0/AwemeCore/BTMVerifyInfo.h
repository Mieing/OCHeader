@interface BTMVerifyInfo : NSObject

+ (BOOL)isCompleteBtmInfo:(id)a0;
+ (void)checkDispalyStartTime:(id)a0 page:(id)a1 btm:(id)a2;
+ (void)verifyDurationString:(id)a0 withPage:(id)a1;
+ (void)verifyStepWithPage:(id)a0;
+ (void)verifyEnterTimeWithPage:(id)a0;
+ (void)verifyBtmInfoWithNode:(id)a0;
+ (id)safeCheckParams:(id)a0;
+ (id)safeCheckArray:(id)a0;
+ (void)checkRegisterValidate:(id)a0 pageId:(id)a1;

@end
