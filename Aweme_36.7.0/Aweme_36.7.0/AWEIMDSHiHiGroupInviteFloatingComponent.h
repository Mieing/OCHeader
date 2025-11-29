@class NSTimer, DUXAlertDialog, NSString, RxPromise, AWEIMDSHiHiGroupInviteFloatingView, UITextField, NSMutableArray, AWEIMDSHiHiGroupClaimCountDownView, UILabel, RxDeferred;
@protocol IESIMParticipantsDataManagerProtocol;

@interface AWEIMDSHiHiGroupInviteFloatingComponent : AWEIMMessageListTopFloatingBaseComponent <IESIMParticipantsDataManagerDelegate, AWEIMMessageListDataAction, AWEIMFloatingViewDispatchProtocol, AWEIMMessageTableViewAction, UITextFieldDelegate>

@property (retain, nonatomic) AWEIMDSHiHiGroupInviteFloatingView *tipsView;
@property (retain, nonatomic) AWEIMDSHiHiGroupClaimCountDownView *countDownView;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) id<IESIMParticipantsDataManagerProtocol> participantDataController;
@property (retain, nonatomic) NSMutableArray *currentMems;
@property (retain, nonatomic) NSMutableArray *invitedUids;
@property (retain, nonatomic) NSMutableArray *allUids;
@property (retain, nonatomic) NSMutableArray *allIMUsers;
@property (retain, nonatomic) RxDeferred *didFetchAllUserInfo;
@property (retain, nonatomic) RxDeferred *x_dispatchReady;
@property (retain, nonatomic) RxPromise *firstShowTips;
@property (retain, nonatomic) RxDeferred *onKeyBoardReturn;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) BOOL isDragging;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) DUXAlertDialog *dialog;
@property (retain, nonatomic) UILabel *errorLabel;
@property (nonatomic) double dialogBodyH;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)onConversationDidUpdateWithConversation:(id)a0;
- (void)hostVC_viewDidDisappear;
- (id)shouldContinueForPriorityObject:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)tableViewWillBeginDragging:(id)a0;
- (void)tableViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)iesim_participantsDataSourceDidUpdate;
- (void)__setupUI;
- (id)__mergedArrayAfterRemovingDuplicatesFrom:(id)a0 comparingWithArray:(id)a1;
- (BOOL)__isOwner;
- (void)__addTipsView;
- (BOOL)__shouldShowCountDownTips;
- (id)__prepareData;
- (void)__addCountDownView;
- (BOOL)isManualDragUp:(id)a0;
- (void)tryUpdateTipsWithParticipants:(id)a0 orInviteUids:(id)a1;
- (id)__checkChanged:(id)a0 uids:(id)a1;
- (long long)__remainHour;
- (void)__trackEvent:(id)a0 withParams:(id)a1;
- (void)doTransferWithParams:(id)a0;
- (BOOL)isHit3630Feature;
- (void)confirmWithParams:(id)a0;
- (id)inputBodyView;
- (double)defaultAlertInnerWidth;
- (void)didClearAllInput;
- (long long)totalHour;
- (long long)configRemainHour;
- (id)__vcParent;
- (id)showTransferAlertWithParams:(id)a0;
- (void)updateTipsViewHeight;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (void)textFieldDidChange:(id)a0;

@end
