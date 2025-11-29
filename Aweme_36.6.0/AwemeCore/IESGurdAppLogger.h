@interface IESGurdAppLogger : NSObject

+ (void)recordCleanStats:(long long)a0 accessKey:(id)a1 channel:(id)a2 packageID:(unsigned long long)a3 extra:(id)a4;
+ (void)uploadEvent:(id)a0 data:(id)a1;
+ (void)recordEventWithType:(long long)a0 extraInfo:(id)a1 errorMessage:(id)a2 accessKey:(id)a3 channels:(id)a4;
+ (void)recordUpdateStats:(id)a0;
+ (void)recordEventWithType:(long long)a0 extraInfo:(id)a1 errorMessage:(id)a2;
+ (void)recordEvent:(id)a0;

@end
