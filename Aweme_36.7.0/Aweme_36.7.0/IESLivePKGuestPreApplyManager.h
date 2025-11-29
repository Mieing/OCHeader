@class NSHashTable, NSString, NSArray, IESLivePKGuestApplyListPopUpView, HTSLiveInteractiveAPI, NSNumber, NSMutableArray, IESLiveWaitingListUser, HTSLiveText;
@protocol IESLiveRoomService, IESLivePKGuestDynamicActivityProvider;

@interface IESLivePKGuestPreApplyManager : NSObject <IESLivePKGuestApplyListPopUpViewDelegate, IESLivePKGuestApplyListPopUpViewDataSource>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSLiveInteractiveAPI *API;
@property (nonatomic) BOOL handlingPreapply;
@property (nonatomic) BOOL loadingPreapplyList;
@property (copy, nonatomic) NSString *preapplyListCursor;
@property (readonly, nonatomic) long long preapplyListPageSize;
@property (copy, nonatomic) NSArray *preapplyList;
@property (nonatomic) BOOL isPreapplyListComplete;
@property (nonatomic) long long preapplyingUserTotalCount;
@property (retain, nonatomic) NSHashTable *delegates;
@property (weak, nonatomic) IESLivePKGuestApplyListPopUpView *operationPanel;
@property (nonatomic) long long currentStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *waitingList;
@property (nonatomic) int waitingListSortStrategy;
@property (retain, nonatomic) IESLiveWaitingListUser *waitingUser;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (retain, nonatomic) NSNumber *serverTime;
@property (nonatomic) BOOL hasFetchWaitingList;
@property (retain, nonatomic) id<IESLivePKGuestDynamicActivityProvider> activityProvider;

- (id)initWithRoom:(id)a0 DIContext:(id)a1;
- (void)applyListPopUpViewDidClickTopRightBtn:(id)a0;
- (void)loadMoreWaitingList;
- (void)hidePreapplyOperationPanel;
- (void)preapplyWithRefreshPanelAfterCompletion:(BOOL)a0;
- (void)popUpPreapplyOperationPanel;
- (void)reloadPreapplyList;
- (void)reloadPreapplyOperationPanel;
- (void)cancelPreapplyWithRefreshPanelAfterCompletion:(BOOL)a0;
- (void)incrementallyLoadPreapplyList;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)clean;

@end
