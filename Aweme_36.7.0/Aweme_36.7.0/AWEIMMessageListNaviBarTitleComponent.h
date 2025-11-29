@class NSString, NSMutableDictionary, AWEIMMessageListNaviBarTitleView;

@interface AWEIMMessageListNaviBarTitleComponent : AWEIMComponentBase <AWEIMMessageListNaviBarAction, AWEIMMessageListNaviBarViewProvider, AWEIMMessageListNaviBarTitleInterface, AWEIMMessageListNaviBarTitleViewDelegate>

@property (nonatomic) BOOL needShowOnLeftOnFullScreen;
@property (retain, nonatomic) AWEIMMessageListNaviBarTitleView *titleView;
@property (retain, nonatomic) NSMutableDictionary *providersMap;
@property (nonatomic) BOOL isViewDidLoadUpdateExecuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)setNeedsUpdateNaviBarTitleWithProvider:(id)a0;
- (void)setNeedsUpdateNaviBarTitle;
- (long long)isDisplayingForProvider:(id)a0;
- (id)makeSubtitleLabel;
- (id)makeSubtitleAttributes;
- (void)viewDidLoadOnExit;
- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (double)naviBarViewCustomSpacing;
- (void)componentDidMounted:(id)a0;
- (void)p_setupTitleView;
- (void)p_log:(id)a0;
- (void)p_setupBindings;
- (void)p_publishProvidersActionsWithLastProviders:(id)a0 newProviders:(id)a1 position:(long long)a2;
- (id)p_getViewFromProvider:(id)a0;
- (void)p_setupNeedShowOnLeftOnFullScreen;
- (void)p_collectNaviBarTitleProvidersWithTargetPositions:(id)a0;
- (void)p_collectAndLayoutNaviBarTitleViewsWithTargetPositions:(id)a0;
- (id)p_findMaxPriorityProvidersWithPriorityProvidersMap:(id)a0 position:(long long)a1;
- (id)p_sortNaviBarTitleWithPosition:(long long)a0 providers:(id)a1;
- (void)p_collectAndLayoutNaviBarTitleViewsWithTargetPosition:(long long)a0;
- (id)p_naviBarTitleViewsAndSpacingsFromProviders:(id)a0;
- (void)p_trackClickChatLeftCornerEvent;
- (void)didTapMessageListNaviBarTitleView:(id)a0 gesture:(id)a1;
- (BOOL)messageListNaviBarTitleView:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)makeTitleLabel;

@end
