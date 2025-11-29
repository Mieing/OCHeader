@class NSDictionary, AWEIMMessageListViewModel, NSString;
@protocol AWEIMAudioContentInterface, AWEIMMessageVisibleCellInterface, AWEIMBubbleGradientColorInterface, IESIMThreadInterface, AWEIMMessageCellTemplateInterface;

@interface IESIMMessageThreadAppendixComponent : AWEIMFlexComponent <AWEIMMessageBubbleBackground_Action, AWEIMAudioTextAction, IESIMThreadAppendixInterface>

@property (weak, nonatomic) id<AWEIMBubbleGradientColorInterface> gradientColorInterface;
@property (weak, nonatomic) id<AWEIMAudioContentInterface> audioContentService;
@property (weak, nonatomic) id<AWEIMMessageVisibleCellInterface> visibleCellService;
@property (weak, nonatomic) id<IESIMThreadInterface> threadService;
@property (weak, nonatomic) id<AWEIMMessageCellTemplateInterface> cellTemplateService;
@property (weak, nonatomic) AWEIMMessageListViewModel *listViewModel;
@property (nonatomic) unsigned long long trackShowReason;
@property (retain, nonatomic) NSDictionary *abDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)viewControllerLifeCycleChanged:(unsigned long long)a0;
- (void)p_addObserver;
- (id)p_getTrackerParams;
- (void)p_refreshView;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (long long)p_chatType;
- (void)p_updatePresenter:(id)a0;
- (void)presenter:(id)a0 didCreateView:(id)a1;
- (void)showAudioTextView;
- (void)hideAudioTextView;
- (BOOL)isShowingThreadAppendixView;
- (BOOL)shouldFillCellTopPadding;
- (BOOL)isIntegratedStyle;
- (void)reBuildComponentIfNeed;
- (void)updateGradientRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)p_bubbleNormalColor:(id)a0;
- (BOOL)p_shouldShowGradientView:(id)a0;
- (id)p_getPresenter;
- (BOOL)p_abShowRootMsgAvatar;
- (void)p_refreshViewIfNeed;
- (void)p_sendAction;
- (void)p_trackThreadAppendixShowIfNeed;
- (BOOL)p_isInVisibleCells;
- (BOOL)p_abBubbleUiOpt;
- (void)p_trackThreadAppendixClick;
- (BOOL)p_canShow:(id)a0;
- (BOOL)p_isIntegratedStyle:(id)a0;
- (BOOL)p_abUnIntegratedStyle;
- (void)p_addThreadAppendixModelObserverIfNeeded;
- (void)p_addGradientViewKVO:(id)a0;
- (void)p_addPresenterObserver;
- (void)p_updateCellPadding;
- (id)p_getLatestMsgPresenterProps:(id)a0;
- (id)p_getLatestButtonPresenterProps:(id)a0;
- (BOOL)p_shouldShowLine;
- (id)p_getGradientProps:(id)a0;
- (void)p_fetchMsgUserWithUserID:(id)a0;
- (id)p_getUserNameAttrString:(id)a0 isSendFromMe:(BOOL)a1;
- (id)p_getContentAttrString:(id)a0 isSendFromMe:(BOOL)a1;
- (void)p_trackThreadAppendixShow;
- (void).cxx_destruct;

@end
