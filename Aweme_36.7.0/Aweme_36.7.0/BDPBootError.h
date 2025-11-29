@interface BDPBootError : NSObject

+ (id)errorCodeFromType:(unsigned long long)a0;
+ (id)resultTypeStrDic;
+ (long long)getLaunchErrorCodeFromError:(id)a0 loadResultType:(unsigned long long)a1;
+ (id)getErrorDescriptionFromErrorCode:(long long)a0;

@end
