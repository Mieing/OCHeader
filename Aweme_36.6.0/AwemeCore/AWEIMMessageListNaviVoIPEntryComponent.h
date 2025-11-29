@class AWEIMMessageVoipEntranceView, NSString;
@protocol AWEIMMessageListNaviBarInterface, AWEIMFansGroupTopDynamicDomainInteractorInterface, AWEIMMessageTabModeInterface;

@interface AWEIMMessageListNaviVoIPEntryComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider, AWEIMMessageVoipEntranceViewDelegate, AWEIMMessageListNaviVoIPEntryInterface, AWEIMConversationDidFetchPeerFullDetailUserAction>

@property (retain, nonatomic) AWEIMMessageVoipEntranceView *voipEntranceView;
@property (weak, nonatomic) id<AWEIMMessageListNaviBarInterface> naviBarService;
@property (weak, nonatomic) id<AWEIMFansGroupTopDynamicDomainInteractorInterface> dynamicDomainService;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (double)naviBarViewCustomSpacing;
- (void)componentDidMounted:(id)a0;
- (void)didFetchPeerFullDetailUser:(id)a0;
- (long long)shouldShowVoIPEntranceInNavigationBarWithConversation:(id)a0;
- (void)p_createVoipEntranceViewIfNeed;
- (void)p_traceVoipEntranceDisplayStatus:(long long)a0 voipEntranceView:(id)a1;
- (void)p_checkUGDidVoIPAction;
- (BOOL)p_isEntranceShowing;
- (void)showVoipPopViewWithVoipEntranceView:(id)a0;
- (void).cxx_destruct;

@end
