@class WCFinderLiveStreamElementModel, NSString, WCFinderFeedContentVM, NSArray, NSMutableDictionary, FinderObjectMonotonicData_LiveIndependentData, LiveStreamLiveRoomInfo, UIColor;
@protocol WCFinderLiveGenericFeedVMDelegate, WCFinderLiveFeedGenericPageContextBase;

@interface WCFinderLiveGenericFeedVM : NSObject <MMFinderLiveFeedExtraInfoFetchExt, WCFinderLiveExt, WCFinderLiveHomePageFeedExt, IWCFinderLiveGenericFeedVMBase>

@property (retain, nonatomic) WCFinderLiveStreamElementModel *model;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) UIColor *mainColor;
@property (nonatomic) int scene;
@property (nonatomic) unsigned long long containerId;
@property (retain, nonatomic) id<WCFinderLiveFeedGenericPageContextBase> ctx;
@property (retain, nonatomic) FinderObjectMonotonicData_LiveIndependentData *liveMonoData;
@property (weak, nonatomic) id<WCFinderLiveGenericFeedVMDelegate> delegate;
@property (nonatomic) BOOL isSkeleton;
@property (readonly, nonatomic) NSString *sessionBuffer;
@property (readonly, nonatomic) BOOL isAutoPlaying;
@property (readonly, nonatomic) BOOL showLiveBizInfo;
@property (readonly, nonatomic) NSMutableDictionary *getLiveBrandParams;
@property (nonatomic) BOOL isTopRefresh;
@property (retain, nonatomic) NSArray *backupFeeds;
@property (readonly, nonatomic) NSString *displayRichTextRecommendReason;
@property (readonly, nonatomic) BOOL showFriendLikeRecommendReason;
@property (readonly, nonatomic) NSArray *toFinderLikeInfoList;
@property (readonly, nonatomic) NSString *friendLikeListReportStr;
@property (readonly, nonatomic) NSString *displayNickname;
@property (readonly, nonatomic) NSArray *assmebledRoomMsgList;
@property (retain, nonatomic) LiveStreamLiveRoomInfo *lastFetchRoomMsgInfo;
@property (readonly, nonatomic) BOOL enableShowCarouselRoomMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)concreteFeedVMClassWithModel:(id)a0;
+ (id)getUrlHashForKey:(id)a0;

- (id)initWithModel:(id)a0 scene:(int)a1 sessionExtraKey:(id)a2 containerId:(unsigned long long)a3 ctx:(id)a4;
- (BOOL)isNoticeAuthor;
- (void)reserveLiveNoticeForUser:(int)a0;
- (void)checkShouldPresentLiveConcertTicketWithCompletionBlock:(id /* block */)a0;
- (void)saveMainColor:(id)a0;
- (void)playStart;
- (void)playStop;
- (id)customElementReportDict:(unsigned long long)a0;
- (void)onFeedHighlightTagUpdate:(unsigned long long)a0 tag:(id)a1;
- (void)onAggregationCardUpdate:(id)a0;
- (void)onFeedLiveInteractionCardUpdate:(unsigned int)a0 content:(id)a1;
- (void)onFeedLiveMsgRoomInfoUpdate:(unsigned long long)a0 roomMsgInfo:(id)a1;
- (void)onLiveNoticeReserveStateChanged:(id)a0 info:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
