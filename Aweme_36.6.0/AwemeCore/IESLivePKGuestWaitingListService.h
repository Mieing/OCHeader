@class NSNumber, NSString, HTSEventContext, HTSLiveInteractiveAPI, NSMutableDictionary, NSDictionary, NSMutableArray, IESLiveWaitingListUser, HTSLiveText;
@protocol IESLiveRoomService;

@interface IESLivePKGuestWaitingListService : NSObject

@property (retain, nonatomic) HTSLiveInteractiveAPI *linkmicAPI;
@property (copy, nonatomic) NSString *waitingListNextCursor;
@property (nonatomic) BOOL enableApplyListLoadMore;
@property (nonatomic) BOOL isLoadMoreList;
@property (retain, nonatomic) NSMutableDictionary *requestTimeMap;
@property (retain, nonatomic) NSMutableArray *waitingList;
@property (nonatomic) int waitingListSortStrategy;
@property (retain, nonatomic) IESLiveWaitingListUser *waitingUser;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) NSDictionary *waitingOffsetInfo;
@property (retain, nonatomic) NSDictionary *applyWaitingTrackInfo;
@property (nonatomic) BOOL hasFetchWaitingList;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long waitingListTotalCount;
@property (nonatomic) BOOL hasLinkPaidGuidence;
@property (nonatomic) int waitingListSource;

- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)refreshWaitingListWithCompletion:(id /* block */)a0;
- (void)loadMoreWaitingListWithCompletion:(id /* block */)a0;
- (id)waitingUserByUserId:(id)a0;
- (void)removeWaitingModelWithUid:(id)a0;
- (void)removeWaitingUsersWithActiveUsers:(id)a0;
- (void)fetchWaitingListWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)classifyInterativeList:(id)a0 type:(int)a1;
- (void)updateWaitingOffsetInfo:(long long)a0;
- (void).cxx_destruct;

@end
