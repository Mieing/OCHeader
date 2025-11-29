@class NSString;

@interface AWEIMChatCellPublishAwemeMentionPokeLightInteractionComponent : AWEIMChatCellComponentBase <AWEIMChatCellTailProvider, AWEIMChatCellTailAction, AWEIMChatCellRecommendChatPresenterDelegate>

@property (copy, nonatomic) NSString *lightInteractionBtnTitle;
@property (nonatomic) BOOL isShowingLightInteractionBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (long long)currentComponentTailType;
- (void)cellTailDidUpdateWithType:(long long)a0;
- (void)onCellDidClick:(id)a0;
- (void)p_updatePokeLightInteractionButtonStyle;
- (void)didClickRecommendChatActionButton:(id)a0;
- (void).cxx_destruct;

@end
