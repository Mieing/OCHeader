@class NSString;

@interface AWEIMChatCellGreetingInteractionComponent : AWEIMChatCellComponentBase <AWEIMChatCellTailProvider, AWEIMChatCellTailAction, AWEIMChatCellRecommendChatPresenterDelegate>

@property (nonatomic) BOOL enableDisplay;
@property (nonatomic) BOOL isShowingLightInteractionBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_canEnableShowGreetWithChat:(id)a0;
+ (BOOL)p_canShowGreetWithChat:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (id)presenterForSnapshot;
- (long long)currentComponentTailType;
- (void)cellTailDidUpdateWithType:(long long)a0;
- (void)onCellDidClick:(id)a0;
- (void)p_updatePokeLightInteractionButtonStyle;
- (void)didClickRecommendChatActionButton:(id)a0;

@end
