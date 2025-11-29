@class NSString;
@protocol AWEIMChatCellHintComponentInterface;

@interface AWEIMChatCellTimeTextComponent : AWEIMChatCellComponentBase <AWEIMChatCellHintComponentAction>

@property (weak, nonatomic) id<AWEIMChatCellHintComponentInterface> hintComponentInterface;
@property (nonatomic) double lastRefreshTime;
@property (nonatomic) BOOL needRefreshOnCellRender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (id)presenterForSnapshot;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (void)didUpdateWithHintType:(unsigned long long)a0;
- (void)__updatePresenter;
- (void)p_updateTimeDisplay;
- (BOOL)__hintIsCompatibleWithTimeText;
- (BOOL)p_canDisplayTimeForLastMessage;
- (void).cxx_destruct;

@end
