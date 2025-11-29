@class NSString, AWEIMCellComponentBase, NSAttributedString, AWEIMComponentManager;
@protocol AWEIMChatCellMessageStateInterface;

@interface AWEIMChatCellMessageHintComponent : AWEIMChatCellComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMMessageHintContentInterface>

@property (retain, nonatomic) NSAttributedString *latestMessageHint;
@property (retain, nonatomic) NSAttributedString *rawAttributedStringBeforeMatchEmoji;
@property (weak, nonatomic) id<AWEIMChatCellMessageStateInterface> messageStateService;
@property (weak, nonatomic) AWEIMCellComponentBase *currentDisplaySubComponent;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (void)assembleLatestMessageHint:(id)a0;
- (void)p_assembleLatestMessageHint:(id)a0;
- (void).cxx_destruct;

@end
