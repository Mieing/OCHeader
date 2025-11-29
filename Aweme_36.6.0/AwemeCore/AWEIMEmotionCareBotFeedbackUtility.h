@interface AWEIMEmotionCareBotFeedbackUtility : NSObject

+ (id)propertyManager;
+ (BOOL)canDisplayFeedbackWithMessage:(id)a0;
+ (long long)feedbackTypeWithMessage:(id)a0;
+ (void)modifyFeedbackTypeWithMessage:(id)a0 feedbackType:(long long)a1;

@end
