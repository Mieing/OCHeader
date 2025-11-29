@interface IESLivePrivacyPolicyMonitor : NSObject

+ (id)baseInfo;
+ (id)getPauseTypeStringValue:(unsigned long long)a0;
+ (id)getResumeTypeStringValue:(long long)a0;
+ (id)extraWithAdditionInfo:(id)a0;
+ (id)getStatusStringValue:(long long)a0;
+ (id)getApplicationStateStr:(long long)a0;
+ (id)getAPISourceStr:(long long)a0;

@end
