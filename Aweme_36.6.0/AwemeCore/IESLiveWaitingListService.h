@class NSCache, NSString, NSNumber, HTSEventContext, HTSLiveInteractiveAPI, NSMutableDictionary, NSDictionary, NSMutableArray, IESLiveWaitingListUser, HTSLiveText;
@protocol IESLiveRoomService;

@interface IESLiveWaitingListService : NSObject

@property (retain, nonatomic) HTSLiveInteractiveAPI *linkmicAPI;
@property (copy, nonatomic) NSString *waitingListNextCursor;
@property (copy, nonatomic) NSString *paidWaitingListNextCursor;
@property (nonatomic) BOOL enableApplyListLoadMore;
@property (nonatomic) BOOL enablePaidWaitingListLoadMore;
@property (nonatomic) BOOL isLoadMoreList;
@property (nonatomic) unsigned long long userListType;
@property (nonatomic) int userListStatus;
@property (retain, nonatomic) NSMutableDictionary *requestTimeMap;
@property (retain, nonatomic) NSCache *getWaitingUserInfoRequestThrottler;
@property (retain, nonatomic) NSMutableArray *waitingList;
@property (retain, nonatomic) NSMutableArray *paidWaitingList;
@property (retain, nonatomic) NSMutableArray *allWaitingList;
@property (nonatomic) int waitingListSortStrategy;
@property (nonatomic) int paidWaitingListSortStrategy;
@property (retain, nonatomic) IESLiveWaitingListUser *waitingUser;
@property (retain, nonatomic) IESLiveWaitingListUser *paidWaitingUser;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) NSDictionary *waitingOffsetInfo;
@property (retain, nonatomic) NSDictionary *applyWaitingTrackInfo;
@property (nonatomic) BOOL hasFetchWaitingList;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long waitingListTotalCount;
@property (nonatomic) long long paidWaitingListTotalCount;
@property (nonatomic) BOOL showPaidListTab;
@property (nonatomic) BOOL selectedPaidListTab;
@property (nonatomic) BOOL hasLinkPaidGuidence;
@property (nonatomic) int waitingListSource;

- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)removeWaitingModelWithUid:(id)a0;
- (void)removeWaitingUsersWithActiveUsers:(id)a0;
- (void)fetchWaitingListWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)classifyInterativeList:(id)a0 type:(int)a1;
- (void)updateWaitingOffsetInfo:(long long)a0;
- (void)refreshWaitingListWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)loadMoreWaitingListWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)offlineQueryWaitingInfoOfUser:(id)a0;
- (void)loadWaitingListWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)realTimeQueryWaitingInfoOfUser:(id)a0 completion:(id /* block */)a1;
- (id)p_mergeList:(id)a0 withList:(id)a1 frontFilterBack:(BOOL)a2;
- (void)realTimeQueryWaitingInfoOfUsers:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
