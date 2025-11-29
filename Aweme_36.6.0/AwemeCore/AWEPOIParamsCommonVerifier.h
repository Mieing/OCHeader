@interface AWEPOIParamsCommonVerifier : NSObject

+ (BOOL)isAppVersionMatchVersionRule:(id)a0;
+ (id)verifyNameInParam:(id)a0 simpleItem:(id)a1;
+ (BOOL)stringIsNumber:(id)a0;
+ (BOOL)paramValue:(id)a0 inArray:(id)a1;
+ (id)messageWithCode:(long long)a0;
+ (long long)verifyEventParam:(id)a0 simpleItem:(id)a1;
+ (id)errorWithCode:(long long)a0 message:(id)a1;

@end
