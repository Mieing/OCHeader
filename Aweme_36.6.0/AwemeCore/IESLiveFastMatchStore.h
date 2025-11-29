@class HTSLiveText, IESLiveWaitingListUser, NSString, NSMutableArray, NSNumber;
@protocol IESLiveDynamicActivityProvider;

@interface IESLiveFastMatchStore : IESLiveWaitingListService <IESLiveAudienceInteractFastMatchPopUpViewDataSource>

@property (retain, nonatomic) id<IESLiveDynamicActivityProvider> activityProvider;
@property (retain, nonatomic) NSMutableArray *waitingList;
@property (retain, nonatomic) NSMutableArray *paidWaitingList;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long waitingListTotalCount;
@property (nonatomic) long long paidWaitingListTotalCount;
@property (nonatomic) int waitingListSortStrategy;
@property (retain, nonatomic) IESLiveWaitingListUser *waitingUser;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (retain, nonatomic) NSNumber *serverTime;
@property (nonatomic) BOOL hasFetchWaitingList;
@property (nonatomic) BOOL showPaidListTab;
@property (nonatomic) BOOL selectedPaidListTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
