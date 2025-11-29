@class FinderSyncTipsShowInfo, WCFinderRedDotCtrlInfo, NSString, WSRedPointCtrlInfo, WCFinderRedDotTipsShowInfo, NewLifeSwitchLogic;

@interface WebSearchRedotMgr : MMUserService <IMsgExt, MMServiceProtocol> {
    WSRedPointCtrlInfo *_ctrlInfo;
}

@property (retain, nonatomic) NewLifeSwitchLogic *newlifeSwiftLogic;
@property (nonatomic) unsigned long long reddotTriggerJumpColumn;
@property (retain, nonatomic) FinderSyncTipsShowInfo *reddotTriggerJumpColumnTipsInfo;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *reddotTriggerJumpColumnShowInfo;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *reddotTriggerJumpColumnCtrlInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)GenReddotVisionTypeFromCategoryNum:(unsigned int)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)loadData;
- (void)migration;
- (BOOL)shouldShowFindFriendTabRedotForRecommend:(BOOL)a0;
- (BOOL)shouldShowFindFriendTabRedotForSearch:(BOOL)a0;
- (BOOL)shouldShowFFSearchRedot:(BOOL)a0;
- (BOOL)shouldShowFFBrowseNumReddotInDiscover;
- (BOOL)shouldShowFFBrowseNumReddotInternal;
- (BOOL)shouldShowFFBrowseRedDot:(BOOL)a0;
- (BOOL)shouldShowFFBrowseRedot:(id)a0 forReason:(id *)a1;
- (BOOL)isReddotEnabled:(id)a0;
- (BOOL)isReddotEnabled:(id)a0 forReason:(id *)a1;
- (BOOL)disableTopRecomemndContentReddotCuzNewlife;
- (BOOL)isFFBrowseRedotClearByConsume;
- (void)clearFFBrowseRedot:(unsigned long long)a0;
- (void)clearAllBrowseReddot;
- (void)onReddotInfoRemoved;
- (void)clearFFBrowseNumRedot:(id)a0;
- (void)clearFFSearchRedot;
- (void)clearFFBrowseSettingRedot;
- (void)tryUpdateRecommendReddotClearedTimeStamps:(unsigned int)a0;
- (void)tryUpdateSearchReddotClearedTimeStamps:(unsigned int)a0;
- (id)getWeSeeRedPointInfo:(unsigned long long)a0;
- (id)getActiveReddotInfo:(unsigned long long)a0;
- (id)getWSRedPointInfo:(BOOL)a0;
- (id)getWSRecommendNumReddotInfo;
- (unsigned int)getWSRecommendNumReddotCount;
- (id)getWSRecommendNumReddotList;
- (void)updateWowContentWithJsonString:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)parseRedPointCtrlMsg:(id)a0;
- (void)saveReddotCtrlInfo;
- (void)clearReddotTriggerJumpInfo;
- (void)saveAndCallExtensionOnReceived:(id)a0;
- (void)dispatchRedDotForSearch:(id)a0;
- (void)reportRedDotReceivedWithInfo:(id)a0;
- (void)dispatchRedDotForBrowse:(id)a0;
- (void)dispatchReddotInfo:(id)a0;
- (void)checkReport101IfCanDisplay:(id)a0 reddotType:(unsigned int)a1;
- (BOOL)handleWowSettingReddot:(id)a0;
- (BOOL)checkContentReddotTabValid:(id)a0;
- (BOOL)handleContentReddot:(id)a0;
- (void)notifyReddotToJs:(id)a0;
- (BOOL)handleHaoKanNumReddot:(id)a0;
- (void)reddotReportCloseRecommend:(unsigned int)a0 reddot:(id)a1;
- (BOOL)cacheTopStoryContentReddotStamp:(unsigned long long)a0 timestamp:(unsigned int)a1;
- (unsigned int)getTopStoryContentReddotStamp:(unsigned long long)a0;
- (id)getCacheKeyFromReddotType:(unsigned long long)a0;
- (id)getCurrentWeSeeReddotDisplayInFind;
- (void).cxx_destruct;

@end
