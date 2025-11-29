@class HTSLiveText, IESLiveWaitingListUser, NSString, NSMutableArray, NSNumber;
@protocol IESLivePKGuestDynamicActivityProvider;

@interface IESLivePKGuestApplyListPopUpViewModel : IESLivePKGuestWaitingListService <IESLivePKGuestApplyListPopUpViewDataSource>

@property (retain, nonatomic) id<IESLivePKGuestDynamicActivityProvider> activityProvider;
@property (retain, nonatomic) NSMutableArray *waitingList;
@property (nonatomic) int waitingListSortStrategy;
@property (retain, nonatomic) IESLiveWaitingListUser *waitingUser;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (retain, nonatomic) NSNumber *serverTime;
@property (nonatomic) BOOL hasFetchWaitingList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWaitingList;
- (void).cxx_destruct;

@end
