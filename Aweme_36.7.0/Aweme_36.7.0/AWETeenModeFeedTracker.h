@interface AWETeenModeFeedTracker : NSObject

+ (void)trackAntiAddictedTime:(id)a0 enterFrom:(id)a1;
+ (void)trackStayTimeWithDuration:(double)a0 enterFrom:(id)a1;
+ (void)trackRecomAuthorVideoScrollWithAuthorID:(id)a0 vcType:(long long)a1;
+ (void)trackRecomAuthorShowWithAuthorID:(id)a0 vcType:(long long)a1;
+ (void)trackTeenHomepageRefresh:(long long)a0 extraParams:(id)a1;
+ (void)trackTeenGrootEntranceShowWithModel:(id)a0 enterFrom:(id)a1 enterPosition:(id)a2 pediaID:(id)a3;
+ (void)trackEncyKnowledgeEntranceShowWithModel:(id)a0 enterFrom:(id)a1 enterPosition:(id)a2 justWatched:(BOOL)a3 showType:(id)a4;
+ (void)trackTeenTrendingShowWithWordsNum:(long long)a0 wordsSource:(id)a1 imprID:(id)a2 enterFrom:(id)a3 enterGroupID:(id)a4;
+ (void)trackTeenTrendingWordsShowWithWordsSource:(id)a0 wordsContent:(id)a1 groupID:(id)a2 imprID:(id)a3 enterFrom:(id)a4 enterGroupID:(id)a5 awemeModel:(id)a6;
+ (void)trackHomepageHotSlideDownWithModel:(id)a0 enterPlayMethod:(id)a1 playMode:(id)a2 toGroupId:(id)a3;
+ (void)trackHomepageHotSlideUpWithModel:(id)a0 enterPlayMethod:(id)a1 playMode:(id)a2 toGroupId:(id)a3;
+ (void)trackVideoSlideDownWithModel:(id)a0 vcType:(long long)a1;
+ (void)trackVideoSlideUpWithModel:(id)a0 vcType:(long long)a1;
+ (void)trackTeenPendantShowWithActivityID:(id)a0;
+ (void)trackTeenPendantHideWithActivityID:(id)a0;
+ (void)trackTeenPendantClickWithActivityID:(id)a0;
+ (void)trackTeenUmbrellaClick;
+ (void)trackEnterSearchWithModel:(id)a0 vcType:(long long)a1 enterPosition:(id)a2;
+ (void)trackEncyKnowledgeEntranceShowWithModel:(id)a0 enterFrom:(id)a1 showType:(id)a2 extra:(id)a3;
+ (void)trackEncyKnowledgeRecomShowWithModel:(id)a0 enterFrom:(id)a1 extra:(id)a2;
+ (void)trackReportSubmitWithModel:(id)a0 vcType:(long long)a1 isFullscreen:(BOOL)a2 extra:(id)a3 enterFrom:(id)a4;
+ (void)trackHomepageTabChangeWithModel:(id)a0 vcType:(long long)a1 enterFrom:(id)a2 enterMethod:(id)a3;
+ (void)trackTeenTrendingWordsClickWithWordsSource:(id)a0 wordsContent:(id)a1 groupID:(id)a2 imprID:(id)a3 enterFrom:(id)a4 enterGroupID:(id)a5 awemeModel:(id)a6;
+ (void)trackTeenUmbrellaClickTimeLock;
+ (void)trackTeenUmbrellaClickAge;
+ (void)trackTeenAgeSettingUmbrellaPopup;
+ (void)trackTeenAgeSettingUmbrellaSubmit:(id)a0;

@end
