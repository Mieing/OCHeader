@class WCFinderLiveStarterReporter;

@interface MMStarterLiveMoreFunctionManager : MMLiveMoreFunctionBaseManager

@property (retain, nonatomic) WCFinderLiveStarterReporter *starterReporter;

+ (id)getMoreFunctionItemsWithTaskId:(id)a0 viewType:(unsigned long long)a1 isGameLive:(BOOL)a2;
+ (void)micItem:(id)a0 taskId:(id)a1 isGameLive:(BOOL)a2;
+ (void)nickItem:(id)a0 taskId:(id)a1;
+ (void)giftItem:(id)a0 taskId:(id)a1;
+ (void)gloryItem:(id)a0 taskId:(id)a1;
+ (void)likeItem:(id)a0 taskId:(id)a1;
+ (void)aiAssistantItem:(id)a0 taskId:(id)a1;
+ (void)realTimeDataPanelItem:(id)a0 taskId:(id)a1;
+ (void)recommendItem:(id)a0 taskId:(id)a1;
+ (void)commentItems:(id)a0 taskId:(id)a1;
+ (void)sensitiveItem:(id)a0 taskId:(id)a1;
+ (void)commentAssistantItem:(id)a0 taskId:(id)a1;
+ (void)quickReplyItem:(id)a0 taskId:(id)a1 isGameLive:(BOOL)a2;
+ (id)liveTask:(id)a0;
+ (BOOL)isFreeTalkEnabled:(id)a0;
+ (BOOL)isMicEnable:(id)a0;
+ (BOOL)isRewardEnable:(id)a0;
+ (BOOL)isRewardAnchorEntrenceEnable;
+ (BOOL)isLikeAnchorEntrenceEnable;
+ (BOOL)isLikeEnable:(id)a0;
+ (BOOL)isGloryShowEnable:(id)a0;
+ (BOOL)isHiddenAudienceNameEnable;
+ (BOOL)isHiddenAudienceName:(id)a0;
+ (BOOL)isCommentEnable:(id)a0;
+ (BOOL)isBigEmoticonCommentEnable:(id)a0;
+ (BOOL)isBigEmoticonCommentSwitchEnable;
+ (BOOL)isAiAssistantSwitchEnabled;
+ (BOOL)isCommentAssistantEnable;
+ (BOOL)isQuickReplyEnable:(id)a0;

- (id)init;
- (id)createData:(unsigned long long)a0;
- (void)reportQuickReplyExpose;
- (id)liveTask;
- (void)reportAnchorActionSheetItems:(id)a0;
- (void)onReportOperationViewDidSelect:(unsigned long long)a0 item:(id)a1;
- (void).cxx_destruct;

@end
