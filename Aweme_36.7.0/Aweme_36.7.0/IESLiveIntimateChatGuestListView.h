@class IESLiveIntimateChatSlotView, NSMutableDictionary, IESLiveInteractiveApplyView, IESLiveMultiInteractUserService, UIView, NSMutableArray, NSString;
@protocol IESLiveIntimateChatGuestListViewDelegate;

@interface IESLiveIntimateChatGuestListView : UIView <IESLiveMultiInteractUserServiceDelegate, IESLiveMultiKTVStageActions>

@property (retain, nonatomic) UIView *slotContainerView;
@property (retain, nonatomic) IESLiveInteractiveApplyView *applyComponent;
@property (retain, nonatomic) IESLiveMultiInteractUserService *userService;
@property (retain, nonatomic) NSMutableDictionary *uidToGuestView;
@property (retain, nonatomic) NSMutableDictionary *uidToStrongRemindView;
@property (retain, nonatomic) NSMutableDictionary *uidToRTCInfoContainerView;
@property (retain, nonatomic) NSMutableArray *slots;
@property (nonatomic) double itemPortraitSpace;
@property (nonatomic) double itemSideLength;
@property (retain, nonatomic) IESLiveIntimateChatSlotView *bottomSlot;
@property (retain, nonatomic) IESLiveIntimateChatSlotView *topSlot;
@property (weak, nonatomic) id<IESLiveIntimateChatGuestListViewDelegate> delegate;
@property (nonatomic) BOOL isLinker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)userModelWrapperConfig;
- (void)resetSoltsWithAppData:(id)a0;
- (void)clearListView;
- (id)p_creatInfoView;
- (void)updateLayoutWithSessions:(id)a0;
- (void)updateLayoutWithAppData:(id)a0;
- (void)addOwnPreview:(id)a0;
- (void)onSwitchConnectMode;
- (void)onActiveListDidChangeFrom:(id)a0 to:(id)a1;
- (void)updateCurrentSinger:(id)a0;
- (void)didSingChallengeClosed;
- (void)addStrongRemindUser:(id)a0;
- (void)removeStrongRemindUserId:(id)a0;
- (BOOL)needDelayForShowIncomePromptWithOfflineUid:(id)a0;
- (void)updateGuestInfoFanticketHidden:(BOOL)a0 isHost:(BOOL)a1;
- (void)showGuestInfoViewIncomPromptWithOfflineUid:(id)a0;
- (void)showGuestInfoViewIncomPromptWithSession:(id)a0;
- (void)closeAllStrongRemindViews;
- (void)updateLayoutWithLayoutMachine:(id)a0;
- (void)updateApplyComponentStatus:(unsigned long long)a0;
- (void)hideAllSessions;
- (void)showAllSessions;
- (void)forceUpdateActiveList;
- (void)hideApplyView;
- (void)updateApplyView;
- (id)findEmptySlotWithReverse;
- (id)p_creatInfoViewWithEnableRadius:(BOOL)a0;
- (id)anchorFindEmptySoltView;
- (void)p_sortSolts;
- (void)p_exchangeSoltItemWithAnimation:(BOOL)a0;
- (void)onApplyComponentClick;
- (void)p_exchangeSoltItemWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)showApplyView;
- (BOOL)p_isEmptyGuestListView;
- (id)p_createStrongReminderViewWithUser:(id)a0;
- (void)ajustViewPositionIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;
- (unsigned long long)sessionCount;

@end
