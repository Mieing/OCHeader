@interface AWEStudioAIGCAsyncTaskBusinessUtil : NSObject

+ (BOOL)showAIGCGeneratingNotificationWithTask:(id)a0;
+ (void)handleAIGCGeneratedResultNotificationWithTask:(id)a0 scene:(unsigned long long)a1;
+ (void)handleAIGCGeneratedFailNotificationWithTask:(id)a0 scene:(unsigned long long)a1;

@end
