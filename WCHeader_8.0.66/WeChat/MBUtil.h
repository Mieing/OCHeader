@interface MBUtil : NSObject

+ (id)getBundleData:(id)a0;
+ (id)getCurrentTimeStampString;
+ (id)md5:(id)a0;
+ (id)instanceNameToBizName:(id)a0;
+ (id)getMBDefaultDebugPath:(id)a0;
+ (id)getWsAppid:(id)a0;
+ (id)getBizName:(id)a0;
+ (id)getMBErrorInfo:(id)a0;
+ (int)getMBErrorCode:(id)a0;
+ (id)getMBErrorMsg:(id)a0;
+ (id)getMBErrorInfoFromTextureErrCode:(unsigned long long)a0;
+ (unsigned long long)currentAbsoluteTime;
+ (unsigned long long)millisecondsWithAbsoluteTimeElapse:(unsigned long long)a0;

@end
