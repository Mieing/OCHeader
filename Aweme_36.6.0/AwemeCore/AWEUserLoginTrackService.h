@interface AWEUserLoginTrackService : NSObject

+ (void)trackLoginFailLoginPlatform:(unsigned long long)a0 additionalParams:(id)a1 error:(id)a2;
+ (void)trackLoginProcedureEvent:(long long)a0 loginPlatform:(unsigned long long)a1 additionalParams:(id)a2;
+ (void)trackSendCodeSendMethod:(id)a0 platform:(unsigned long long)a1 error:(id)a2 additionalParams:(id)a3;
+ (void)trackLoginProcedureEvent:(long long)a0 loginStyle:(unsigned long long)a1 showPlatforms:(id)a2 viewModel:(id)a3 error:(id)a4;
+ (unsigned long long)platformOfLoginStyle:(unsigned long long)a0 viewModel:(id)a1;
+ (void)trackLoginEventName:(id)a0 loginStyle:(unsigned long long)a1 isPanelShow:(BOOL)a2 additionalParams:(id)a3;
+ (void)trackLoginProcedureEvent:(long long)a0 loginPlatform:(unsigned long long)a1 error:(id)a2;
+ (id)commonParamsLoginTrackEvent:(long long)a0 loginPlatform:(unsigned long long)a1 showPlatforms:(id)a2;
+ (id)eventNameDictionary:(unsigned long long)a0;
+ (void)trackLoginProcedureEvent:(long long)a0 loginPlatform:(unsigned long long)a1 showPlatforms:(id)a2 additionalParams:(id)a3 error:(id)a4;
+ (void)trackLoginEventName:(id)a0 loginPlatform:(unsigned long long)a1 isPanelShow:(BOOL)a2 additionalParams:(id)a3;
+ (id)commonParamsLoginPlatform:(unsigned long long)a0 isPanelShow:(BOOL)a1;

@end
