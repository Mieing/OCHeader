@class NSString, NSMutableArray, AWEFeedFeatureContext;
@protocol AWEFeatureHandlerProtocol;

@interface AWEFeedFeatureCollector : NSObject <AWEGokuPluginTargetProtocol>

@property (retain, nonatomic) NSMutableArray *featureProviders;
@property (retain, nonatomic) AWEFeedFeatureContext *feedContext;
@property (weak, nonatomic) id<AWEFeatureHandlerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addFeedFeatureProvider:(id)a0;
- (void)removeFeedFeatureProvider:(id)a0;
- (void)didChangePlaybackStateWithAction:(id)a0;
- (void)awemePlayerWillLoopPlayingWith:(id)a0;
- (void)willDisplayCellWithContext:(id)a0;
- (void)didEndDisplayingCellWithContext:(id)a0;
- (void)liveStreamPrepareForDisPlay:(id)a0;
- (void)collectFeatureFromAppLogWithEvent:(id)a0 params:(id)a1;
- (void)onCommentCloseNoti:(id)a0;
- (void)updateFeatureSpecificEvent:(unsigned long long)a0 enable:(BOOL)a1 withModel:(id)a2;
- (BOOL)isNewFeatureCommerceConsumed;
- (void)handleImageFeatureFromApplogWithEvent:(id)a0 params:(id)a1;
- (void)updateFeaturePOIAction:(unsigned long long)a0 withItemID:(id)a1;
- (void)updateFeatureSpecificEvent:(unsigned long long)a0 enable:(BOOL)a1 withItemID:(id)a2;
- (BOOL)isHangoutFocusedScene:(id)a0;
- (void)updateFeatureUserAct:(unsigned long long)a0 withAwemeID:(id)a1 feedScene:(id)a2;
- (void)updateFeatureCommentAction:(unsigned long long)a0 withGroupID:(id)a1 commentID:(id)a2;
- (void)updateFeatureImageAlbumAction:(unsigned long long)a0 withAwemeID:(id)a1 feedScene:(id)a2;
- (void)updateFeatureImageAlbumDetailStayTime:(long long)a0 withAwemeID:(id)a1 feedScene:(id)a2;
- (void)p_updatePlayerInfoWithContext:(id)a0;
- (void)updateFeatureVideoDurationWithModel:(id)a0 context:(id)a1;
- (void)updateFeatureFirstPlayTimeWithModel:(id)a0 context:(id)a1;
- (void)updateFeaturePlayTimeWithModel:(id)a0 context:(id)a1;
- (void)updateFeatureFirstPlayTimeWithModel:(id)a0;
- (void)p_updateFeaturePlayStartWithModel:(id)a0;
- (void)updateFeatureLiveTimeGapWithModel:(id)a0 FeedScene:(id)a1;
- (void)updateFeatureFeedScene:(id)a0 withModel:(id)a1;
- (void)updateContextInfoLiveLastEndTimeIfNeededWithModel:(id)a0 feedScene:(id)a1;
- (void)updateFeatureCustomWithModel:(id)a0 feedScene:(id)a1;
- (void)updateFeatureSkipWithModel:(id)a0 feedScene:(id)a1;
- (void)updateFeaturesByFeatureProvidersWithModel:(id)a0 feedScene:(id)a1;
- (void)updateFeatureMetaSongIdWithModel:(id)a0;
- (void)updateFeatureUgidWithModel:(id)a0;
- (void)updateFeatureStickerWithModel:(id)a0;
- (void)updateFeatureKuaishanInfoIdWithModel:(id)a0;
- (void)updateFeatureMvIdWithModel:(id)a0;
- (void)updateFeatureCopairClusterWithModel:(id)a0;
- (void)updateFeatureMmClusterWithModel:(id)a0;
- (void)updateFeaturePublishIsRecalledByPublishWithModel:(id)a0;
- (void)updateFeatureAwemeImageTeWithModel:(id)a0;
- (void)updateFeatureIsCommerceConsumedWithModel:(id)a0;
- (void)updateFeatureVVLevelWithModel:(id)a0;
- (void)updateFeatureUserAct:(unsigned long long)a0 withModel:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)moduleNames;

@end
