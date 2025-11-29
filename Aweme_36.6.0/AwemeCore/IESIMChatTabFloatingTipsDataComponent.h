@class NSDictionary;

@interface IESIMChatTabFloatingTipsDataComponent : AWEIMChatCellComponentBase <IESIMChatTopFloatingTipsInterface> {
    void /* function */ currentTips;
    void /* unknown type, empty encoding */ tipsController;
    void /* unknown type, empty encoding */ conversation;
}

@property (nonatomic, copy) NSDictionary *currentTips;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)dealloc;
- (void)componentDidMounted:(id)a0;
- (BOOL)isfloatingBarModelExistingWithType:(long long)a0;
- (id)floatingBarConExtraWithType:(long long)a0;
- (id)floatingBarConExtNewWithType:(long long)a0;
- (long long)floatingTipVersionNewWithType:(long long)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)updateComponentWhenCellPrepareForReuse;
- (void).cxx_destruct;
- (id)init;

@end
