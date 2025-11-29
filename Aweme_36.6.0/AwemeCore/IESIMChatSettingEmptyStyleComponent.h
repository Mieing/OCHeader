@interface IESIMChatSettingEmptyStyleComponent : AWEIMComponentBase <IESIMChatSettingEmptyStyleInterface> {
    void /* unknown type, empty encoding */ uiInterface;
    void /* unknown type, empty encoding */ errorNetView;
    void /* unknown type, empty encoding */ hostView;
    void /* unknown type, empty encoding */ naviBar;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ backgroundView;
}

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateLoadingStyle;
- (void)updateErrorStyle;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
