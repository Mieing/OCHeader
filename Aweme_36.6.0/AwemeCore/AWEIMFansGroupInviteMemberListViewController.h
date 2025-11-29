@class NSObject, NSArray, AWEIMContactListSelectAllHeaderView, NSString, UILabel, UIView, NSMutableArray;
@protocol IESIMLoadingViewProtocol, OS_dispatch_semaphore;

@interface AWEIMFansGroupInviteMemberListViewController : AWEIMListBaseViewController <AWEIMContactListSelectAllHeaderViewProtocol>

@property (retain, nonatomic) UILabel *completionLabel;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) NSArray *wholeActiveFansList;
@property (retain, nonatomic) NSArray *fansUids;
@property (retain, nonatomic) NSMutableArray *selectedFansUids;
@property (retain, nonatomic) AWEIMContactListSelectAllHeaderView *selectAllHeaderView;
@property (nonatomic) long long remainingInvitableFansCount;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *fetchFansListSemaphore;
@property (nonatomic) BOOL willFetchFansListData;
@property (nonatomic) BOOL didHaveFansList;
@property (nonatomic) BOOL isBackUp;
@property (nonatomic) long long shownGroupTotalCount;
@property (nonatomic) long long shownGroupMemberTotalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)changeToMultiselect:(BOOL)a0;
- (void)__didTapComplete;
- (void)updateMultiselectCount:(long long)a0;
- (BOOL)canTapCellAtIndexPath:(id)a0;
- (long long)currentFunctin;
- (void)removeSelectObject:(id)a0;
- (void)prepareDataWithRecentContacts:(id)a0 friendContacts:(id)a1 allContacts:(id)a2 commonEntranceModels:(id)a3 completeBlock:(id /* block */)a4;
- (void)__updateNavBar;
- (void)__back;
- (void)addShareModelToSelectList:(id)a0;
- (void)removeShareModelFromSelectList:(id)a0;
- (void)updateReturnKeyType;
- (void)__fetchActiveFansList;
- (BOOL)__activeFansSectionIsNotEmpty;
- (BOOL)__isActiveFans:(id)a0;
- (BOOL)__canInviteMoreFans;
- (id)__titleForSelectAllFansHeader;
- (void)__fillPartialFansListAndFansUidsList;
- (void)__updateNavAndCompleteBtnText;
- (void)__sendFansGroupInviteBubbleMessage;
- (BOOL)__isDisplayingActiveFansSection;
- (void)__updateSelectAllHeader;
- (void)didTapOnSelectAllHeaderView;
- (id)appendCustomSectionDataToSectionData:(id)a0;
- (id)apppendCustomSectionTitlesToSectionTitles:(id)a0;
- (id)appendCustomScetionTypeListToSectionTypeList:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)fetchData;
- (id)initWithParams:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;

@end
