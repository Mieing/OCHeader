@interface FBSDKUserDataStore : NSObject

+ (void)initialize;
+ (void)setAndHashUserEmail:(id)a0 firstName:(id)a1 lastName:(id)a2 phone:(id)a3 dateOfBirth:(id)a4 gender:(id)a5 city:(id)a6 state:(id)a7 zip:(id)a8 country:(id)a9;
+ (void)setAndHashData:(id)a0 forType:(id)a1;
+ (void)setHashData:(id)a0 forType:(id)a1;
+ (void)clearDataForType:(id)a0;
+ (id)getHashedData;
+ (id)stringByHashedData:(id)a0;
+ (id)encryptData:(id)a0 type:(id)a1;
+ (id)normalizeData:(id)a0 type:(id)a1;
+ (BOOL)maybeSHA256Hashed:(id)a0;

@end
