@interface AWEFormatMessageListNaviBarSwitchModeComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider, AWEConversationFormatEnterActions, AWEFormatDigitalHumanInteractionModeSwitchService> {
    void /* unknown type, empty encoding */ networkIsConnect;
    void /* unknown type, empty encoding */ currentInteractionMode;
    void /* unknown type, empty encoding */ roomModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_button;
}

@property (nonatomic) long long currentMode;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)switchDigitalHumanInteractionMode:(long long)a0 compeltion:(id /* block */)a1;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (struct CGSize { double x0; double x1; })naviBarViewIntrinsicContentSize;
- (double)naviBarViewCustomSpacing;
- (void)clickSwitchModeButtonHandler;
- (void)notifyNetWorkStatusWithNotification:(id)a0;
- (void)didUpdateFormatRoom:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
