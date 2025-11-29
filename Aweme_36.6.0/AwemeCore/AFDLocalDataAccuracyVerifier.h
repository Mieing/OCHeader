@interface AFDLocalDataAccuracyVerifier : NSObject

+ (BOOL)needVerifyReadTable:(id)a0;
+ (void)verifyWithParams:(id)a0;
+ (BOOL)needVerifyMultiRead:(id)a0;
+ (BOOL)needVerifyWithSampleRate:(double)a0;
+ (void)verifyReadFromTable:(id)a0 primaryIDs:(id)a1 data:(id)a2 scene:(id)a3;
+ (void)verifyMultiReadFromTables:(id)a0 primaryIDs:(id)a1 data:(id)a2 scene:(id)a3;

@end
