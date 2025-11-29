@class NSString, AWEIMLightInteractionEntryModel;

@interface AWEIMChatCellRecommendChatComponent : AWEIMChatCellComponentBase <AWEIMChatCellTailProvider, AWEIMChatCellTailAction, AWEIMChatCellRecommendChatInterface, AWEIMChatCellRecommendChatPresenterDelegate, AWEIMChatCellConsecutiveChatComponent_Action>

@property (nonatomic) BOOL isDisplayingRecommendChatAction;
@property (retain, nonatomic) NSString *lightInteractionBtnTitle;
@property (retain) NSString *lightInteractionBtnTitle_Atomic;
@property (nonatomic) BOOL contextRecommendEnable;
@property (retain, nonatomic) AWEIMLightInteractionEntryModel *currentEntryModel;
@property (retain) AWEIMLightInteractionEntryModel *currentEntryModel_Atomic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (void)AWEIMChatCellConsecutiveChatComponent_DidTappedConversaionId:(id)a0;
- (long long)currentComponentTailType;
- (void)cellTailDidUpdateWithType:(long long)a0;
- (void)onCellDidClick:(id)a0;
- (void)didClickRecommendChatActionButton:(id)a0;
- (BOOL)isDisplayingContextRecommend;
- (id)currentLightInteractionName;
- (void)p_updateContextRecommendChat:(id)a0 completion:(id /* block */)a1;
- (void)p_updateContextRecommendChatButtonStyle:(id)a0;
- (void)p_clickLightInteractionBtnForCtxRecommend;
- (void)p_reloadTailComponent;
- (void)p_shouldDisappearWithConversaionId:(id)a0;
- (void).cxx_destruct;

@end
