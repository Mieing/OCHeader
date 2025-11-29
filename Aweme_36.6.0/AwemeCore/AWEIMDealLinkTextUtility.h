@interface AWEIMDealLinkTextUtility : NSObject

+ (void)dealWithTemplateModel:(id)a0 message:(id)a1 atView:(id)a2;
+ (void)parseTextLinkAction:(id)a0 message:(id)a1 conversation:(id)a2 inView:(id)a3;
+ (void)dealWithContext:(id)a0;
+ (void)dealWithTemplateModel:(id)a0 message:(id)a1 atView:(id)a2 btmToken:(id)a3;
+ (void)p_trackMateUnlockTopic:(id)a0;
+ (BOOL)checkDebounce:(id)a0;
+ (void)p_openLinkUsingWebpageModeWithLink:(id)a0;
+ (void)p_trackUrlClickWithIsNativeLanding:(BOOL)a0 urlUIType:(long long)a1;
+ (void)p_trackUrlClickWithIsNativeLanding:(BOOL)a0;
+ (void)pushWithLoadingViewControllerWithTemplateModel:(id)a0 context:(id)a1;
+ (id)feedbackRequestParamsWithMessage:(id)a0 template:(id)a1;
+ (id)reportExtraStringWithMessage:(id)a0;
+ (id)p_replaceIncentiveChatSchema:(id)a0 withRelationID:(id)a1;
+ (void)p_trackBubbleClickWithEvnet:(id)a0 con:(id)a1;
+ (id)p_targetSchemaForWebpageModelWithLinkModel:(id)a0 context:(id)a1;
+ (void)p_tryParseLinkAndGetRouteNativePageVCWithLinkModel:(id)a0 completed:(id /* block */)a1;
+ (void)openLinkWithModel:(id)a0;
+ (id)p_targetSchemaForLiveWithModel:(id)a0 isLive:(BOOL)a1 roomId:(id)a2 anchorId:(id)a3 extraParams:(id)a4;
+ (id)p_exchangeAvailableSchemaWithOriginalSchema:(id)a0;
+ (void)p_transShortUrlToLongIfNeededWithUrl:(id)a0 completed:(id /* block */)a1;
+ (void)dealWithCompanyTemplateModel:(id)a0 message:(id)a1 conversation:(id)a2 atView:(id)a3;

@end
