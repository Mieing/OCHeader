@class WCFinderLiveHomePageInitialParams, NSString, WCFinderLivePageStayReporter;

@interface WCFinderLiveHomePageReportSession : NSObject

@property (nonatomic) BOOL skipFeedsReport;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) WCFinderLivePageStayReporter *moreLiveReporter;
@property (retain, nonatomic) WCFinderLiveHomePageInitialParams *initialParams;
@property (nonatomic) unsigned long long fromLiveID;
@property (retain, nonatomic) NSString *fromReportScene;

- (id)initWithCommentScene:(int)a0 params:(id)a1;
- (void)onSessionEnterFromSection:(id)a0 feedVM:(id)a1 index:(unsigned long long)a2;
- (void)reportInteractiveHomePageAction:(unsigned long long)a0 liveID:(unsigned long long)a1;
- (void)report21053ExposeActionWithSection:(id)a0 feedVM:(id)a1 index:(unsigned long long)a2;
- (void)report21053ClickActionWithSection:(id)a0 feedVM:(id)a1 index:(unsigned long long)a2;
- (void)report21158NoticeActionFromContainerType:(unsigned long long)a0 noticeAction:(long long)a1 model:(id)a2 columnId:(id)a3 index:(unsigned long long)a4;
- (void)report21158FollowNoticeHalfAction:(long long)a0 feedVM:(id)a1 sectionVM:(id)a2;
- (void)report23057SectionListExpose:(unsigned long long)a0 containerModel:(id)a1;
- (void)report23057CardAction:(unsigned long long)a0 pageIndex:(unsigned long long)a1 cardIndex:(unsigned long long)a2 sectionVM:(id)a3 feedVM:(id)a4;
- (void)reportLiveFeedFriendLikeRecommendReason:(id)a0 actionType:(unsigned long long)a1;
- (void)reportLiveFeedFriendLikeHalfExpose:(id)a0 likeCount:(unsigned long long)a1;
- (void)reportLiveFeedFriendLikeHalfClose:(id)a0 likeCount:(unsigned long long)a1;
- (void)report23057JumperAction:(unsigned long long)a0 pageIndex:(unsigned long long)a1 containerModel:(id)a2;
- (void)report23057MoreNavBtnAction:(unsigned long long)a0;
- (void)report23057ShowConcertTicketActionWithModel:(id)a0;
- (void)report23057ConcertNoticeCardAction:(unsigned long long)a0 activityId:(id)a1 eidUdfKv:(id)a2;
- (void)report23057RightSearchAction:(unsigned long long)a0;
- (void)report23057PersonalCenterBtnAction:(unsigned long long)a0;
- (void)report23057ColumnMoreButtonAction:(unsigned long long)a0 containerModel:(id)a1;
- (void)report23057FollowColumnFoldBtnAction:(unsigned long long)a0;
- (void)reportNpsSurveyHalfExpose:(id)a0;
- (void)reportNpsSurveyFullConfirm:(id)a0;
- (void)reportNpsSurveyFullClose;
- (void)report22946EnterActionWithSource:(unsigned long long)a0;
- (void)report22947QuitActionWithSource:(unsigned long long)a0;
- (id)kvReportLiveRoomJsonDictWithSection:(id)a0 feedVM:(id)a1 index:(unsigned long long)a2;
- (id)kvReportNoticeJsonDictWithContainerType:(unsigned long long)a0 columnId:(id)a1 index:(unsigned long long)a2 noticeId:(id)a3;
- (unsigned long long)mainPageReportPosition:(id)a0;
- (void)updateSkipFeedsReport:(BOOL)a0;
- (void)reportFeedExpose:(id)a0 collectionView:(id)a1 indexPath:(id)a2 sectionVM:(id)a3 pageIndex:(unsigned long long)a4;
- (void)reportFeedExposeEnd:(id)a0 collectionView:(id)a1 indexPath:(id)a2 sectionVM:(id)a3;
- (void)updateFeedExpose:(id)a0;
- (void)updateFeedExposeEnd:(id)a0 index:(unsigned long long)a1 sectionVM:(id)a2;
- (void)updatePlayStateWithModel:(id)a0 state:(unsigned long long)a1 index:(unsigned long long)a2 sectionVM:(id)a3;
- (void)reportFeedAutoPlayIfNeeded:(id)a0 play:(BOOL)a1 index:(unsigned long long)a2 sectionVM:(id)a3;
- (void)cleanExposeCache;
- (void)bindNewExposeReport:(id)a0 collectionView:(id)a1 elementModel:(id)a2 indexPath:(id)a3 report0PercentExpose:(BOOL)a4 getSectionVmBlock:(id /* block */)a5;
- (void)reportNewValidRatioExposeStart:(id)a0 cell:(id)a1 indexPath:(id)a2 collectionView:(id)a3 sectionVM:(id)a4 pageIndex:(unsigned long long)a5;
- (void)reportNewValidRatioExposeEnd:(id)a0 index:(unsigned long long)a1 sectionVM:(id)a2;
- (void)reportAggregationCardClick:(id)a0;
- (void)reportAggregationCardAction:(int)a0 feedVM:(id)a1 effectiveExposeTimeMs:(unsigned long long)a2 startEffectiveExposeTimeMs:(unsigned long long)a3 exposeTimeMs:(unsigned long long)a4;
- (void)reportFinderFeedActionType:(int)a0 dataItem:(id)a1 value:(id)a2;
- (void).cxx_destruct;

@end
