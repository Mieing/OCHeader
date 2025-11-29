@interface AWEIMGrowthImpl.IncentiveChatInnerServiceImpl : NSObject <AWEIMIncentiveChatInnerService>

- (BOOL)incentiveChatSupportRefresh;
- (id)incentiveChatRefreshHandlerWithComponentCenter:(id)a0;
- (id)incentiveChatRefreshHandlerWithConversationContext:(id)a0;
- (id)createIncentivePushGuideInteractorIfNeeded;
- (void)incentivePushGuide_willEnterConversation;
- (id)init;

@end
