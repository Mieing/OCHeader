@class WCFinderLiveBaseLogReporter;

@interface MMLiveMoreFunctionManager : MMLiveMoreFunctionBaseManager

@property (readonly, nonatomic) BOOL isConnectMicEnabled;
@property (retain, nonatomic) WCFinderLiveBaseLogReporter *reporter;

+ (id)getMoreFunctionItemsWithTaskId:(id)a0 viewType:(unsigned long long)a1 isGameLive:(BOOL)a2;
+ (void)nickItem:(id)a0 liveTaskId:(id)a1;
+ (void)commentsItems:(id)a0 liveTaskId:(id)a1;
+ (void)sensitiveItem:(id)a0 liveTaskId:(id)a1;
+ (void)commentAssistantItem:(id)a0 liveTaskId:(id)a1;
+ (void)quickReplyItem:(id)a0 liveTaskId:(id)a1;
+ (void)productQuestionItem:(id)a0 liveTaskId:(id)a1;
+ (void)micItems:(id)a0 liveTaskId:(id)a1;
+ (void)giftItem:(id)a0 liveTaskId:(id)a1;
+ (void)gloryItem:(id)a0 liveTaskId:(id)a1;
+ (void)likeItem:(id)a0 liveTaskId:(id)a1;
+ (void)aiAssistantItem:(id)a0 liveTaskId:(id)a1;
+ (void)realTimeDataPanelItem:(id)a0 liveTaskId:(id)a1;
+ (void)weakNetOptimizationItem:(id)a0 liveTaskId:(id)a1;
+ (void)recommendItem:(id)a0 liveTaskId:(id)a1;
+ (void)modifyCoverImageItem:(id)a0 liveTaskId:(id)a1;
+ (void)openBulletinItem:(id)a0 liveTaskId:(id)a1;
+ (void)visibleRangeItem:(id)a0 liveTaskId:(id)a1;
+ (void)locationItem:(id)a0 liveTaskId:(id)a1;
+ (id)liveTask:(id)a0;
+ (void)setSubPath:(id)a0 liveTaskId:(id)a1;
+ (BOOL)shouldShowAnchorTaskGuide:(id)a0 liveTaskId:(id)a1;
+ (BOOL)isRewardAnchorOrAssistantEntrenceEnable:(id)a0;
+ (unsigned int)anchorSwitchFlag:(id)a0;
+ (BOOL)isLikeAnchorOrAssistantEntrenceEnable:(id)a0;
+ (BOOL)isHiddenAudienceNameEnable:(id)a0;
+ (id)getShowCityWithWCLocationInfo:(id)a0;
+ (BOOL)showVisibleRangeWithTask:(id)a0;
+ (id)getVisibleRangeDescriptionWithTask:(id)a0;

- (id)createData:(unsigned long long)a0;
- (id)liveTask;
- (BOOL)isCommentAssistantEnable;
- (void)reportAnchorActionSheetItems:(id)a0;
- (void)onReportOperationViewDidSelect:(unsigned long long)a0 item:(id)a1;
- (void).cxx_destruct;

@end
