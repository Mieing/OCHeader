@interface AWESearchAIGCDeepSeekStatusManager : NSObject

+ (id)currentAIModeName;
+ (BOOL)enableAISearchDeepMode;
+ (id)deepSeekConfig;
+ (id)settingsPageCurrentDeepSeekMode;
+ (id)settingsPageConfig;
+ (void)fetchAIGCDeepSeekStatus:(id /* block */)a0;
+ (void)updateAIGCDeepSeekStatus:(BOOL)a0 callBack:(id /* block */)a1;
+ (BOOL)searchAIGCModelEnabled;
+ (BOOL)settingsPageEnableDeepSeekMode;

@end
