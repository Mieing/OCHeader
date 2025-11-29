@class NSString, NSMutableDictionary, AWEAwemeModel;

@interface AWEChapterManager : NSObject <DUXAlertDialogBodyView, AWEChapterManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *chapterSwtichDict;
@property (retain, nonatomic) NSMutableDictionary *reeditVideoErrorTimesDict;
@property (nonatomic) double chapterLoopOpenTime;
@property (retain, nonatomic) NSMutableDictionary *chapterKnowledgeStatusDict;
@property (retain, nonatomic) NSMutableDictionary *chapterKnowledgeUUIDMapping;
@property (nonatomic) BOOL chapterCatalogPanelShowing;
@property (nonatomic) BOOL isChapterLoopPlay;
@property (retain, nonatomic) AWEAwemeModel *chapterLoopModel;
@property (nonatomic) long long chapterLoopPlayIndex;
@property (nonatomic) long long chapterLoopRealPlayIndex;
@property (readonly, nonatomic) double chapterLoopStartTime;
@property (readonly, nonatomic) double chapterLoopEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isIntelligentChapterAutoApplyEnable;
+ (BOOL)isIntelligentChapterAutoApplyOpen;
+ (BOOL)hasChapterKnowledge:(id)a0;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (void)deleteCurrentChapterWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)removeRecommendChapter:(id)a0 itemID:(id)a1 extra:(id)a2;
+ (BOOL)isChapterKnowledgeStyle:(id)a0 chapterPanelStyle:(long long)a1;
+ (id)chapterConfig;
+ (id)p_jsonStringEncoded:(id)a0;
+ (BOOL)shouldUserAutoShowIntelligentChapterOnJX:(id)a0;
+ (id)sharedManager;

- (id)duxAlertDialog_view;
- (void)applyNewChapter:(id)a0 context:(id)a1;
- (void)updateLocalChapterWithParams:(id)a0 model:(id)a1 context:(id)a2;
- (void)showChapterAutoApplyDialogWithTrackParams:(id)a0 knownHandler:(id /* block */)a1;
- (void)postRecommendChapterRegenerationWithGroupId:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldShowChapterProgressBarWithModel:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAWEPlayInteractionAdapter;
- (void)resetPreventFeedPauseState;
- (BOOL)enableChapterLoopWithModel:(id)a0;
- (BOOL)isChapterLoopLastIndex;
- (void)updateChapterLoopStatusWithOpen:(BOOL)a0 model:(id)a1 index:(long long)a2 extraParams:(id)a3;
- (BOOL)shouldShowChapterProgressSwitchWithModel:(id)a0;
- (BOOL)shouldShowChapterProgressBarForLandscapeWithModel:(id)a0;
- (void)switchChapterProgress:(BOOL)a0 withModel:(id)a1;
- (BOOL)showErrorToastIfNeededWithItemID:(id)a0 error:(id)a1;
- (long long)getLikeStatusForChapterKnowledge:(id)a0;
- (void)saveChapterKnowledgeLikeStatus:(long long)a0 forChapterKnowledge:(id)a1;
- (BOOL)defaultSwitchStatusWithModel:(id)a0;
- (BOOL)isBadChapterOnNewStrategyWithModel:(id)a0;
- (BOOL)isBadChapterOverLimitWithModel:(id)a0;
- (double)chapterTitleWidthWithString:(id)a0;
- (id)assignUniqueIdForSubModel:(id)a0;
- (void)showChapterEditor:(id)a0 enterFrom:(id)a1 isRecommend:(BOOL)a2;
- (void)trackSuccessToastShow:(id)a0 toastType:(id)a1;
- (id)getChapterAutoShowDialogView;
- (BOOL)isEqualToChapterLoopModelItemId:(id)a0;
- (void)trackChapterLoopStatusChangedWithOpen:(BOOL)a0 model:(id)a1 index:(long long)a2 extraParams:(id)a3;
- (void)trackChapterLoopPlayTimeWithModel:(id)a0 extraParams:(id)a1;
- (void)showRecommendChapterAlertIfNeededtWithModel:(id)a0 confirmBlock:(id /* block */)a1;
- (void)convertRecommendChapterInfoToChapterList:(id)a0 enterFrom:(id)a1;
- (void)showChapterEditor:(id)a0 isRecommend:(BOOL)a1;
- (void)playerSeekPlayTime:(double)a0 context:(id)a1;
- (void)showChapterAutoShowDialogWithTrackParams:(id)a0 knownHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
