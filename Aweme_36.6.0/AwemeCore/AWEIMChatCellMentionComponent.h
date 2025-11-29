@class NSString;
@protocol AWEIMChatCellHintComponentInterface;

@interface AWEIMChatCellMentionComponent : AWEIMChatCellComponentBase <AWEIMChatCellHintComponentAction>

@property (weak, nonatomic) id<AWEIMChatCellHintComponentInterface> hintComponentInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)didUpdateWithHintType:(unsigned long long)a0;
- (BOOL)p_disableHighLightWithChat:(id)a0;
- (void)__updatePresenter;
- (BOOL)__hintIsCompatibleWithMention;
- (void).cxx_destruct;

@end
