@class NSString, NSDictionary;

@interface AWERelatedRecommendDCTrackerManager : NSObject {
    void /* function */ innerFlowEntranceID;
}

@property (class, nonatomic, readonly) AWERelatedRecommendDCTrackerManager *shared;
@property (class, nonatomic, copy) NSString *processID;
@property (class, nonatomic) long long isPreloadFrom;
@property (class, nonatomic, copy) NSDictionary *interactionDict;

@property (nonatomic, copy) NSString *innerFlowEntranceID;

+ (void)trackDCRecommedFooterShowWithModel:(id)a0;
+ (void)trackDCRecommedFooterClickWithModel:(id)a0;
+ (void)trackRecommedListFooterShowWithModel:(id)a0;
+ (void)trackRecommedListFooterClickWithModel:(id)a0;
+ (void)trackOuterDislikeWith:(id)a0 relatedModel:(id)a1 currentDislikeModel:(id)a2 feedbackInfo:(id)a3;
+ (void)trackInnerDislikeWith:(id)a0 relatedModel:(id)a1 currentDislikeModel:(id)a2 feedbackInfo:(id)a3;
+ (void)trackMentionDataRequestStatusWith:(id)a0 duration:(double)a1 isPreload:(BOOL)a2 isFeedFinished:(BOOL)a3 status:(long long)a4 mentionModelCount:(long long)a5;
+ (void)trackDualSceneValidSlideWithModel:(id)a0 extraParms:(id)a1;
+ (void)trackValidShowWith:(id)a0 model:(id)a1 clientRank:(long long)a2 currentModel:(id)a3;

- (void)refreshProcessID;
- (void)refreshEnterTimestamp;
- (void)refreshStayTimestamp;
- (void)smartPreloadTrackWith:(id)a0 context:(id)a1;
- (void)trackManagerInitWith:(id)a0;
- (id)interactWithType:(long long)a0;
- (void)clearRecord;
- (void)recordInteractWithType:(long long)a0;
- (id)closeMethodWithType:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
