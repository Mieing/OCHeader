@interface IESContainerKitLogger : NSObject

+ (id)_actionStringFromAction:(long long)a0;
+ (void)logAction:(long long)a0 property:(id)a1 before:(id)a2 after:(id)a3 callerInfo:(id)a4;
+ (void)logError:(long long)a0 callerInfo:(id)a1 infos:(id)a2;

@end
