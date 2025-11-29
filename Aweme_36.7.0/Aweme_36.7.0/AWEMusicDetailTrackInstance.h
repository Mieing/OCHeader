@class NSString;

@interface AWEMusicDetailTrackInstance : NSObject <AWEMusicDetailTrackInstanceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackShootWith:(id)a0 trackParams:(id)a1;
+ (void)trackDetailHeaderMusicNotAvailableShow:(id)a0 unavailableReason:(id)a1;
+ (void)trackWhenLunaUgEntryButtonShowed:(id)a0;
+ (void)trackClickSpotlightProfile:(id)a0 dataHelper:(id)a1;
+ (void)trackFollowWithUserModel:(id)a0 dataHelper:(id)a1;
+ (void)trackShowMuscianCard:(id)a0;
+ (void)trackMusicFaultShowLunaUg:(id)a0;
+ (void)trackTapCollectedToLunaToast:(id)a0;
+ (void)trackShowCollectedToLunaToast:(id)a0;
+ (void)trackWhenCollectToLunaButtonShowed:(id)a0;
+ (void)trackDetailHeaderInfoShowed:(id)a0;
+ (void)trackWhenCollectToLunaButtonClick:(id)a0;
+ (void)trackDetailHeaderInfoClick:(id)a0;
+ (void)trackDidTapCompleteMusicButton:(id)a0;
+ (void)trackDidTapOnLeaderboardEntryView:(id)a0;
+ (void)trackWhenJumpToMatchedPGCMusicDetailPage:(id)a0;
+ (void)trackWhenEnterPersonalDetailPageWithUid:(id)a0 secUid:(id)a1 enterMethod:(id)a2 extraTrackParams:(id)a3;
+ (void)trackDidTapEditTitleButton:(id)a0;
+ (void)trackFeedAwemeVideoShow:(id)a0 index:(long long)a1 dataContext:(id)a2;
+ (void)trackFeedAwemeVideoEnterWithModel:(id)a0 dataContext:(id)a1;
+ (void)trackSwitchPlayStatus:(BOOL)a0 dataHelper:(id)a1;
+ (void)trackPromoteTickerShow:(id)a0;
+ (void)trackReceivedHeaderResponse:(id)a0;
+ (void)trackShowLeaderboardInfo:(id)a0 dataHelper:(id)a1;
+ (void)trackShowDecorateTag:(id)a0;
+ (void)trackCompleteMusicButtonShow:(id)a0;
+ (void)trackShowMatchedPGCInfoView:(id)a0;
+ (void)trackRelatedFeedAwemeVideoShow:(id)a0 index:(long long)a1 dataContext:(id)a2 unavailableReason:(id)a3;
+ (void)trackRelatedFeedAwemeVideoEnterWithModel:(id)a0 dataContext:(id)a1 unavailableReason:(id)a2;
+ (void)trackInspirationCardShowWithDataContext:(id)a0 inspirationModel:(id)a1 index:(long long)a2;
+ (void)trackInspirationCardClickWithDataContext:(id)a0 inspirationModel:(id)a1 index:(long long)a2 clickType:(unsigned long long)a3;
+ (void)trackWhenInspirationsReadyToShowWith:(id)a0 dataContext:(id)a1;
+ (void)trackWhenClickTemplateCutSameButtonWith:(id)a0 trackParams:(id)a1;
+ (id)commonInspirationsDidShowTrackParamsWithDataContext:(id)a0;
+ (id)getInspirationCardCommonTrackParamsWithDataContext:(id)a0 inspirationModel:(id)a1 index:(long long)a2;
+ (void)trackDidTapLunaUgButton:(id)a0;


@end
