@interface AWEIMGroupInteractiveChecker : NSObject

+ (unsigned long long)checkForbidInteractiveWithConversation:(id)a0;
+ (unsigned long long)checkForbidInteractiveWithIESIMConversation:(id)a0;
+ (void)showDefaultToastWithReasonV2:(unsigned long long)a0;
+ (unsigned long long)checkForbidInteractiveWithChatModel:(id)a0;
+ (void)showDefaultToastWithReason:(unsigned long long)a0;

@end
