@class WCFinderMemberShipZoneHeaderData, WCFinderMemberShipDraftViewModel, WCFinderContact, NSString, WCFinderMemberShipZonePushParams, WCFinderMemberShipHomePageViewModel, NSMutableArray, WCFinderMemberShipFeedTabViewModel, ForwardMessageLogicController, WCFinderMemberShipPlaybackTabViewModel, WCFinderMemberShipActivityViewModel;
@protocol WCFinderMemberShipZoneViewModelDelegate;

@interface WCFinderMemberShipZoneViewModel : WCFinderMemberShipBaseVM <ForwardMessageLogicDelegate, WCFinderMemberShipFeedTabViewModelDelegate, WCFinderMemberShipPlaybackTabViewModelDelegate, WCFinderMemberShipDraftViewModelDelegate>

@property (retain, nonatomic) NSMutableArray *tabModels;
@property (retain, nonatomic) WCFinderMemberShipZoneHeaderData *headerData;
@property (retain, nonatomic) WCFinderMemberShipZonePushParams *params;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (nonatomic) unsigned long long memberShipStatus;
@property (nonatomic) unsigned long long visitorStatus;
@property (retain, nonatomic) WCFinderMemberShipFeedTabViewModel *feedTabViewModel;
@property (retain, nonatomic) WCFinderMemberShipPlaybackTabViewModel *playbackTabViewModel;
@property (retain, nonatomic) WCFinderMemberShipDraftViewModel *draftViewModel;
@property (retain, nonatomic) WCFinderMemberShipActivityViewModel *activityViewModel;
@property (retain, nonatomic) WCFinderMemberShipHomePageViewModel *homePageViewModel;
@property (nonatomic) unsigned long long unsubscribeMsId;
@property (nonatomic) BOOL isBlocked;
@property (weak, nonatomic) id<WCFinderMemberShipZoneViewModelDelegate> delegate;
@property (readonly, nonatomic) int profileEnterType;
@property (readonly, nonatomic) BOOL isAuthorPerspective;
@property (readonly, nonatomic) int currentCommentScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)blockTitleStr;
- (id)blockDescStr;
- (id)initWithParams:(id)a0;
- (void)getLocalDatas;
- (void)getRemoteDatas;
- (void)onGetDetailInfo:(id)a0;
- (unsigned long long)getDraftTabIndex;
- (unsigned long long)getPlaybackTabIndex;
- (unsigned long long)getVideoTabIndex;
- (unsigned long long)getDiscussionTabIndex;
- (long long)getDiscussionTabDataCount;
- (unsigned long long)getHomePageTabIndex;
- (void)removeDraftTabModels;
- (void)shareNameCardToFriend;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)handleLiveNoticeForUser:(id)a0;
- (void)checkShouldShowConcertTicketAfterFirstReservation:(id)a0;
- (void)finderMemberShipZoneFeedTabViewFetchListSuc;
- (void)finderMemberShipZonePlaybackTabViewFetchListSuc;
- (void)finderMemberShipZoneDraftTabViewFetchListSuc;
- (void)finderMemberShipZoneDraftTabInsertItemAtIdx:(long long)a0;
- (void)finderMemberShipZoneDraftTabDataChanged;
- (void)requestSearchData:(unsigned long long)a0;
- (void).cxx_destruct;

@end
