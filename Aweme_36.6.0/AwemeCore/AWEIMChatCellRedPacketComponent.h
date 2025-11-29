@protocol AWEIMUIThemeProtocol;

@interface AWEIMChatCellRedPacketComponent : AWEIMChatCellComponentBase <AWEIMIncentiveChatServiceMessage>

@property (nonatomic) unsigned long long redPacketStyle;
@property (nonatomic) BOOL forceSetGrey;
@property (weak, nonatomic) id<AWEIMUIThemeProtocol> themeService;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onCellWillDisplay:(id)a0;
- (id)presenterForSnapshot;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (void)completeIncentiveChatServiceUpdate:(id)a0;
- (void)incentiveChatService:(id)a0 relationUpdateWithRelationID:(id)a1 conversationID:(id)a2;
- (void)incentiveChatService:(id)a0 relationProgressUpdate:(id)a1 cacheProgress:(id)a2 source:(unsigned long long)a3;
- (void)incentiveChatService:(id)a0 relationActivationUpdate:(id)a1 source:(unsigned long long)a2;
- (void)didChangeRelationOldStatus:(unsigned long long)a0 newStatus:(unsigned long long)a1 conversionID:(id)a2;
- (void)p_onThemeChanged;
- (void)p_updatePresenterIfNeeded:(id)a0;
- (void)p_newUpdatePresenterIfNeeded:(id)a0;
- (BOOL)p_checkEnableShowWithChat:(id)a0;
- (void)p_createPresenterIfNeeded;
- (BOOL)p_updateImageIfNeededWithChat:(id)a0;
- (void)p_setTrackExtra;
- (BOOL)isInActivationStatus;
- (id)p_getPresenterConfigWithStyle:(unsigned long long)a0;
- (void)p_newUpdateImageIfNeeded:(id)a0;
- (unsigned long long)p_preCalculateRedPacketStyleWithRelationProgress:(id)a0;
- (void)p_changeToNewStyle:(unsigned long long)a0;
- (void)updatePresenterConfigWithStyle:(unsigned long long)a0;
- (unsigned long long)calculateRedPacketStyleWithInfo:(id)a0 relationProgress:(id)a1;
- (void)onCellDidClick:(id)a0;
- (id)getAttributeStringWithText:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
