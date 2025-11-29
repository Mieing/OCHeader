@class AWEDetailUserProfileModel, AWEDetailPropViewModel, AWEDetailCommerceSponsorProfileModel, NSString;

@interface AWEDetailPropTracker : NSObject <AWEDetailWelfareTrackDelegate, AWEDetailTrackerService>

@property (retain, nonatomic) AWEDetailPropViewModel *viewModel;
@property (retain, nonatomic) AWEDetailCommerceSponsorProfileModel *trackedSponsorModel;
@property (retain, nonatomic) AWEDetailUserProfileModel *trackedUserModel;
@property (retain, nonatomic) id trackedLinkModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEnterPersonalDetailWithModel:(id)a0;
- (void)trackClickAuthorViewWithModel:(id)a0;
- (void)trackShowADUserHeadWithModel:(id)a0;
- (void)trackClickADUserHeadWithModel:(id)a0;
- (void)trackShowVerifiedUserCellWithModel:(id)a0;
- (void)trackDidShowLoraInfoWithCellWithModel:(id)a0;
- (void)trackShowLoraRoleManagePage;
- (void)trackShowLinkWithModel:(id)a0;
- (void)trackClickLinkWithModel:(id)a0;
- (void)trackClickChallangeEntranceViewWithModel:(id)a0;
- (void)trackShowFriendVidelWithModel:(id)a0 index:(long long)a1;
- (void)trackFeedEnterWithModel:(id)a0;
- (void)trackDetailPageClientShowWithModel:(id)a0;
- (void)trackCollect:(BOOL)a0;
- (void)trackDetailPageExitWithMask;
- (void)trackDetailPagePullUp;
- (void)trackDetailPagePullDown;
- (void)trackLeftCustomButtonClickWithLabel:(id)a0;
- (void)trackFlowAuthEntryTokenWithPositionCertID:(id)a0 bindEntity:(id)a1;
- (id)initWithStateContext:(id)a0;
- (void)welfareView:(id)a0 trackWelfareProjectClick:(id)a1;
- (void)welfareView:(id)a0 trackWelfareProjectMatchingShow:(id)a1;
- (void)trackCommercePropClick;
- (void)trackLoginNotifyWithLabel:(id)a0;
- (void)trackClickFavouriteHintWithModel:(id)a0;
- (void)trackEnterPersonalFavourite;
- (void)trackFollowDesigner;
- (void)trackPropSelect;
- (void)trackPropDetailShootButtonShowPerformance;
- (void)trackLeftCustomButtonShowWithLabel:(id)a0;
- (void)trackRankingListNoAwemeToastShowWithAwemeID:(id)a0;
- (void)trackRankingListNoAwemeWithAwemeID:(id)a0;
- (void)rankingListAwemeFetchPerformanceWithDuration:(double)a0 statusCode:(long long)a1 requestSize:(long long)a2 responseSize:(long long)a3 state:(id)a4 logId:(id)a5 error:(id)a6;
- (void)rankingListUserInfoFetchPerformanceWithDuration:(double)a0 statusCode:(long long)a1 requestSize:(long long)a2 responseSize:(long long)a3 state:(id)a4 logId:(id)a5 error:(id)a6;
- (void)clickRankingItemWithRankType:(long long)a0 rank:(long long)a1 rankUserCount:(long long)a2;
- (void)enterRankingPage;
- (void)showRankingTab;
- (void)clickRankingTabWithTabPage:(id)a0 clickType:(id)a1;
- (void)trackClickMoreButton;
- (id)p_getAIGCType;
- (void)rankingListDataWithFriendsList:(BOOL)a0 nationalList:(BOOL)a1 friendsListSize:(long long)a2 nationalListSize:(long long)a3 selfSecUid:(id)a4;
- (void).cxx_destruct;

@end
