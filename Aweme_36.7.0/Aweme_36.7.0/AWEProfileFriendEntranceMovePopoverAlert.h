@class NSString, AWEBinding, NSMutableSet;
@protocol AWEProfileGuidePopoverHelperProtocol;

@interface AWEProfileFriendEntranceMovePopoverAlert : AWEProfileGuidePopoverBaseAlert <AWEProfileGuidePopoverHelperDelegate, AWEUserMessage>

@property (retain, nonatomic) id<AWEProfileGuidePopoverHelperProtocol> popoverHelper;
@property (nonatomic) unsigned long long alertState;
@property (retain, nonatomic) AWEBinding *stateBinding;
@property (retain, nonatomic) NSMutableSet *shownUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_mateConfig;
+ (id)p_mutualConfig;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)popoverHelperDidInvokeOnclose:(id)a0;
- (void)p_startPipelineWithHost:(id)a0;
- (void)p_handleState:(id)a0;
- (void)p_showMateAlertIfNeededWithHostView:(id)a0 showCallback:(id /* block */)a1 dismissCallback:(id /* block */)a2;
- (void)p_showMutualAlertIfNeededWithHostView:(id)a0 showCallback:(id /* block */)a1 dismissCallback:(id /* block */)a2;
- (void)p_showAlertWithConfig:(id)a0 popoverConfig:(id /* block */)a1 hostView:(id)a2 showCallback:(id /* block */)a3 dismissCallback:(id /* block */)a4 confirmCallback:(id /* block */)a5;
- (void)showAlertIfNeededWithHostView:(id)a0 user:(id)a1;
- (void).cxx_destruct;

@end
