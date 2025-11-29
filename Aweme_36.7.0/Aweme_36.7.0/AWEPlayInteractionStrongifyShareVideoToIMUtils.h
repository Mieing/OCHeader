@interface AWEPlayInteractionStrongifyShareVideoToIMUtils : NSObject

+ (id)AWEIMFeedShareGuideBarModelV2;
+ (BOOL)shouldShowByRecommendToFriendControlWithTrigerType:(long long)a0 context:(id)a1;
+ (id)AWEIMFeedShareGuideBarModel;
+ (id)AWEIMFeedShareGuideBarOptimizeExpModel;
+ (void)requestPitayaCanShowWithContext:(id)a0;
+ (void)trackShareShowFailWithReasonType:(id)a0 reasonDetail:(id)a1 extDict:(id)a2 context:(id)a3 TrigerMode:(long long)a4;
+ (BOOL)checkShareModelIsValidWithShareModels:(id)a0 AndContext:(id)a1;
+ (void)fetchShareModelWithContext:(id)a0 completionBlock:(id /* block */)a1;
+ (id)transferTriggerModeToStringWithTrigerMode:(long long)a0;
+ (id)mergeAndFilterShareModels:(id)a0 withShareModels:(id)a1;
+ (BOOL)p_filterGroupShareModel:(id)a0;
+ (id)p_filterGroups:(id)a0;
+ (id)p_findFirstGroupInShareModels:(id)a0;
+ (unsigned long long)getCurrentModelFetchTypeContext:(id)a0;
+ (void)p_imFetchShareModelFromRecentChatWithContext:(id)a0 completionBlock:(id /* block */)a1;
+ (void)p_imFetchShareModelFromGroupRecUnfiyWithContext:(id)a0 completionBlock:(id /* block */)a1;
+ (void)p_imFeedShareFromRecommendOrderWithContext:(id)a0 completionBlock:(id /* block */)a1;
+ (BOOL)p_imFeedShareFromGroupRecUnifyEnableWithContext:(id)a0;
+ (BOOL)p_imFeedShareFromUserRecUnfiyEnableWithContext:(id)a0;
+ (id)filterShareModels:(id)a0;
+ (BOOL)shouldEnableControlByRecommendToFriendWithTrigerType:(long long)a0;
+ (BOOL)canShowByRecommendToFriendWithTrigerType:(long long)a0 context:(id)a1;

@end
